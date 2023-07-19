#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t;
    int j=0,m=0;
    string k="hello";
    for(int i=0;i<s.size();i++)
    {
      if(s[i]==k[j])
      {
          j++;
          m++;
      }
    }
    if(m==5)
    {
        cout<<"YES";
        
    }
    else
    {
        cout<<"NO";
    }
}