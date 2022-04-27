#include <iostream>

class yoda
{
    private:
    int a,b,c;
    public:
    void add();
};

void yoda::add()
{
    cin>>a>>b;
    c = a + b;
    cout<<endl<<"sum is"<<c<<endl;
}
 
int main()
{
    yoda wan;
    wan.add();
    return 0;
}
