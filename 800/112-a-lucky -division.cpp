#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int r=0;
    int f=0;
    int t=n;
    while(t>0)
    {
      r=t%10;
      if((r==4)&&(  r==7 ))
    {
     f=1;
    }
    else
    {
     f=0;
    }
     t/=10;
    }
     if (f==1)
     {
         cout<<"YES";
     }
     else if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%447==0 || n%477==0|| n%474==0 ||n%747==0 || n%774==0 ||n%777==0 )
     {
        cout<<"YES";
         
     }
     else
     {
         cout<<"NO";
     }
}