#include <iostream>

using namespace std;

int main()
{
    //declaring variable
    int* pointInt;
    float* pointFloat;
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    pointInt = new int[n];
    pointFloat = new float;
    
    for(int i = 0; i < n; ++i)
    {
        cout<<"Value "<<i + 1<<": ";
        cin>> *(pointInt + i);
    }
    
    *pointFloat = 45.45f;

    for(int i = 0; i < n; ++i)
    {
        cout<<endl<<*(pointInt + i);
    }
    cout << endl<<"Float value is" <<*pointFloat << endl;

    delete[] pointInt;
    delete pointFloat;

    return 0;
}

