#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
  
    int c=0;
    int still=0;
    for(int i=0; i<n ;i++)
    {
        int a,b;
        cin>>a>>b;
        still-=a;
        still+=b;
        c=max(c,still);

        
    }
   
    cout<<c;
    return 0;
}