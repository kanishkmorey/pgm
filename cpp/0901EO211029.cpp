//Program by Kanishk Morey 0901EO211029

#include <iostream>

using namespace std;

class A { //base class;
    public:
        A()
        {
            cout<<"Class A called"<<endl;
        }

};
  
class B : public virtual A {  //base class called virtually.
    public:
        B()
        {
            cout<<"Class B called"<<endl;
        }
};
  
class C : public B  {       //multiple inhertence derived class
    public:
        C()
        {
            cout<<"Class C called which is an example of multiple inheritence as its derived from a derived class"<<endl;
        }

};
  
class D : public A, public B {      //multilevel inheritence, hence showing

    public:
        D()
        {
            cout<<"Class D called which is derived from A and B"<<endl;
        }

};

int main()
{
    C object;
    cout<<"Calling from D"<<endl<<endl;
    D obj2;

    return 0;
}