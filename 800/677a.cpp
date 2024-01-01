#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int sum=0;
    for(int i=0 ; i<n ;i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]<=m)
        {
            sum+=1;
        }
        else
        {
            sum+=2;
        }
    }
    cout<<sum;

}