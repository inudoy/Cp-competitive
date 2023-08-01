

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int c,n,m=0;
    cin>>c>>n;
    
    int a[n];
    
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
     m=a[n-1]-a[0];
     for(int i=c; i<=n;i++)
    {
        int ans=a[i-1]-a[i-c];
        ans=abs(ans);
        
       m=min(m,ans);
    }
    cout<<m;
}
