#include <iostream>

using namespace std;

class addComplex
{
    public:
    int real, imaginary;
    addComplex(int a = 0, int b = 0)
    {
        real = a;
        imaginary = b;
    }
    
    addComplex add(addComplex a1, addComplex a2)
    {
        addComplex temp;
        temp.real = a1.real + a2.real;
        temp.imaginary = a1.imaginary + a2.imaginary;
        return temp;
        //function that return an object
    }
};

int main()
{
    addComplex a1(5,3);    
    cout<<"Complex number 1 : "<< a1.real<< " + i"<< a1.imaginary<<endl;
    addComplex a2(9, 5);
    cout<<"Complex number 2 : "<< a2.real<< " + i"<< a2.imaginary<<endl;
    addComplex a3;
    a3 = a3.add(a1, a2);
    cout<<"Sum of complex number : "<< a3.real << " + i"<< a3.imaginary;
    
    return 0;
}