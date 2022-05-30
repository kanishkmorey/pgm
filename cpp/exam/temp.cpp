#include<iostream>

using namespace std;

int lastNum(int a)
{
    int x;
    x = a*a*a;
    return x;
}

class CUBE
{
    private:
    int num = 0, result = 0;
    public:
    
    CUBE()
    {
        cout<<"Enter any number: ";
        cin>>num;
    }
    void calculateCUBE()
    {
        for(int i = 1; i <= num; i++)
        {
            result = i * i * i;
            cout<<endl<<"Cube of "<<i<<": "<<result;
        }   
    }
    void func()
    {
        cout<<endl<<"Cube of last number is: "<<lastNum(num);
    }
};

int main()
{
    CUBE obj;
    obj.calculateCUBE();
    obj.func();
    return 0;
}