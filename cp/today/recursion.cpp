#include<iostream>
using namespace std;

int fact(int b)
{
    if(b<=1)
    {
        return 1;
    }
    return b* fact(b-1);
}
/*step by step calculation
fact(4)=4*fact(3)
fact(4)=4*3*fact(2)
fact(4)=4*3*2fact(1)
fact(4)=4*3*2*1 //as base case is 1 thats then output will be generated
fact(4)=24
*/

int main()
{
    //factorial number
    int a;
    cin>>a;


    cout<<"factorial of "<< a <<" is :\n"<<fact(a)<<endl;
    return 0;
}