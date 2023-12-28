#include<iostream>
using namespace std;

int fib(int b)
{
    if(b<2)
    {
        return 1;
    }
    return fib(b-2)+ fib(b-1);
}

int main()
{
    //factorial number
    int a;
    cin>>a;


    cout<<"fibonacci of "<< a <<" is :\n"<<fib(a)<<endl;
    return 0;
}