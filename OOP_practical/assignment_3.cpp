#include <iostream>
using namespace std;

class complex
{
    private:
        int re, im;
    public:

        void set_data()
        {
            cout<<"\nEnter Real Part :: ";
            cin>>re;
            cout<<"\nEnter Imag. Part :: ";
            cin>>im;
        }
        void show_data()
        {
            cout<<re<<"+"<<im<<"i"<<"\n";
        }
        void sum(complex,complex);
};

void complex::sum(complex c1,complex c2)
{
    re=c1.re+c2.re;
    im=c1.im+c2.im;
}
int main()
{
    complex c1, c2, c3;
    cout<<"Enter 1st complex no.: \n";
    c1.set_data();
    cout<<"\nEnter 2nd complex no.: \n";
    c2.set_data();
    cout<<"\nThe 1st complex no. is :: ";
    c1.show_data();
    cout<<"\nThe 2nd complex no. is :: ";
    c2.show_data();

    c3.sum(c1,c2);
    cout<<"\nThe Sum of two complex no.s are :: ";
    c3.show_data();

    return 0;
}