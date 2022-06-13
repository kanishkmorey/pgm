//Header files.
#include <iostream>

using namespace std;

//Global variables.
int choice;


class item
{
    private:
        int item_code[50];      //array storing item codes.
        int item_price[50];     //array storing item prices.
        int count;              //counts the number of items.
    public:
        void init();            //initializes count to zero, so that there would be no garbage value
        void item_add();        //function to add items in cart.
        void item_delete();     //function to remove item from cart.
        void item_summary();    //function which provides detailed summary.
};

void item::init()
{
    count = 0;
}

void item::item_add()
{
    cout<<endl<<"Enter item code: ";
    cin>>item_code[count];
    cout<<endl<<"Enter price: ";
    cin>>item_price[count];
    count++;    //increases the count of items stored in cart.
}

void item::item_delete()
{
    cout<<endl<<"Enter item code of the item you want to delete";   //takes the input from user to delete the element of the item code.
    int tempCode;
    cin>>tempCode;
    for(int i = 0; i < count; i++)
    {
        if(tempCode == item_code[i])
        {
            item_price[i] = 0;  //makes the price zero so that while displying summary it doesn't show deleted element.
        }
    }
}

void item::item_summary()
{
    int sum = 0;
    cout<<endl<<"==================================================";
    cout<<endl<<"Summary of cart:"<<endl;
    for(int i = 0; i < count; i++)
    {
        if(item_price[i] > 0) // deleted element have the price of zero, this filters so that deleted items are not shown.
        {
            cout<<endl<<"Item Code = "<<item_code[i]<<"| Item Price = "<<item_price[i];
            sum = sum + item_price[i];  //adds the total price of all the items.
        }
    }
    cout<<endl<<"Total Items = "<<count<<" Price Total = "<<sum;

    cout<<endl<<"==================================================";

}

void greet(void)    //function for opening message.
{
    cout<<endl<<"-----------------------MENU-----------------------";
    cout<<"\n\n\nWelcome to Shopping Cart!!"<<endl<<"Created by Kanishk Morey 0901EO211029\n\n\n";
    cout<<"1.Add item to cart"<<endl;
    cout<<"2.Delete Item from cart"<<endl;
    cout<<"3.Summary"<<endl;
    cout<<"4.Exit"<<endl;
    cin>>choice;    //for switch case.
    cout<<endl<<"--------------------------------------------------"<<endl;

}


int main()
{
    item object1;       //oject created.
    object1.init();     //initializing count to zero.
    do
    {
        greet();
        switch(choice)
        {
        case 1:
            object1.item_add();
            break;
        case 2:
            object1.item_delete();
            break;
        case 3:
            object1.item_summary();
            break;
        case 4:
            break;
        }
    }while(choice != 4);    //code runs again if choice is not 4 that is exit.

    cout<<"=====CART CLOSED====="<<endl;
    
    return 0;
}