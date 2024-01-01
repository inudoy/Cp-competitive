#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
  
    int a[n];
    int f=0;
  
for(int i=0; i<n;i++)
{
    cin>>a[i];
}
for(int i=0; i<n;i++)
{
f+=a[i];
   }

if(f>=1)
{
    cout<<"HARD"<<endl;
}
else 
{
    cout<<"EASY"<<endl;
}
}
