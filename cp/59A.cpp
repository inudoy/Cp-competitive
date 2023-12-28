#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0;
    int z=0;
    for(int i=0;s[i] != '\0';i++)
    {
        if(s[i]>=65 && s[i]<=90 )
        {
            c++;
        }
        else{
            z++;
        }
    }

    int k=(c-z);
    if(k>0)
    {
       for (int i = 0; s[i]!='\0'; i++)
       {
        s[i]=toupper(s[i]);
       }
       
    }
    else
    {
         for (int i = 0; s[i]!='\0'; i++)
       {
        s[i]=tolower(s[i]);
       }
    }
    cout<<s;
}
