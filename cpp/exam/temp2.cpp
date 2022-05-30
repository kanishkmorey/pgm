#include <iostream>

using namespace std;

class AREA
{
    private:
    float height,width;
    double length;
    public:
    float calculateArea(float radius)
    {
        return (3.14 * radius * radius);
    }
    float calculateArea(float height1, float base)
    {
        return (height1 * base)/2;
    }
    float calculateArea(double length1, float width1)
    {
        return length1*width1;
    }
    inline void setData()
    {   
        int choice;
        cout<<endl<<"What shape's area do you want to calculate: ";
        cout<<endl<<"1.Circle"<<endl<<"2.Triangle"<<endl<<"3.Rectangle";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter radius: ";
                cin>>height;
                cout<<"Area is: "<<calculateArea(height)<<endl;
                break;
            case 2:
                cout<<"Enter Height and Base: ";
                cin>>height>>width;
                cout<<"Area is: "<<calculateArea(height,width)<<endl;
                break;

            case 3:
                cout<<"Enter Length and Width: ";
                cin>>length>>width;
                cout<<"Area is: "<<calculateArea(length,width)<<endl;
                break;
            default:
            cout<<"Error";
            break;
        }
    }
};

int main()
{
    AREA obj;
    obj.setData();
    return 0;
}