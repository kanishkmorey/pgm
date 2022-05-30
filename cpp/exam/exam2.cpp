#include <iostream>

using namespace std;

class BOX
{
    private:
    int WIDTH;
    public:
    void SETWIDTH()
    {
        cout<<endl<<"Enter width of the box: ";
        cin>>WIDTH;
    }
    void printwitdt()
    {
        cout<<endl<<"Width is: "<<WIDTH;   
    }
};

int main()
{
    BOX b;
    b.SETWIDTH();
    b.printwitdt();
    
    return 0;
}