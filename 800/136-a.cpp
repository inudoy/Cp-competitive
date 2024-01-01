#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
int gift[n];
for (int i = 1; i <=n; i++)
{
  cin>>a[i];

  gift[a[i]]=i; 
  
}
for (int i = 1; i <=n; i++)
{
  cout<<gift[i]<<" ";
}


    
}