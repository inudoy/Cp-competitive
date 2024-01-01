#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    int c=0;
    
    for(int i=0;i<k;i++)//just checking that i and i+1 are same or not until k-1 and counting ++;
    {
        
        
            if(s[i]==s[i+1])
            {
                c++;
            }
        
    }
    cout<<c;
}