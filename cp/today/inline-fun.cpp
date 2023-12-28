#include<iostream>
using namespace std;

//INLINE FUNCTION

 inline int  sum(int a ,int b)//for time optimizatins not for big function
{
    return a+b;
}
int  prod( int a ,int k=5 ,int z=9)//default arguments write it last in passing
{
    return a* k*z;
}


int main()
{
int a,b,c;
cin>>a>>b>>c;
cout<<"sum"<<sum(a,b)<<endl;
cout<<"sum"<<sum(a,b)<<endl;

cout<<"prod"<<prod(a)<<endl;//prod135



return 0;


}