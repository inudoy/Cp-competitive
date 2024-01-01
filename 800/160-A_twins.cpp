#include<iostream>
#include<algorithm>
using namespace std;


int main()
{int i;
    int n;
    cin>>n;
    int x[n];
    int s=0,s2=0;
    int c=0;
    for( i=0; i<n;i++)
    {
    cin>>x[i];
    
    s+=x[i];
    }
    s=s/2;
    sort(x,x+n);
    for(int j=n-1;j>=0;j--)
    {
        s2+=x[j];
        c++;
        if(s<s2)
        {
            break;
        }
    }
   cout<<c;
}