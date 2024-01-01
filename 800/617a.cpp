#include<iostream>
using namespace std;

 int main()
 {
    
    int x;
    cin>>x;
    if(x==0)
    {
        cout<<1;
    }
    
  
    if(x%5==0)
    {
        cout<<(x/5);
    }
    else
    {
        cout<<(x/5)+1;
    }
 }