#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,k;
    cin>>n>>k;
    int i=1;
    while(i<=k)
    {
        int z=(n%10);
        if((z)>0)
        {
            n-=1;
        }
        else{
            n/=10;
        }
        i++;
    }
cout<<n;

}