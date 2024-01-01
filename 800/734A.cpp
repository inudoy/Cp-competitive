#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0,p=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        {
            c++;
        }
       else if(s[i]=='D')
        {
            p++;
        }
    }
    if (c>p)
    {
        cout<<"Anton"<<endl;
    }
    else if(c<p)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
}