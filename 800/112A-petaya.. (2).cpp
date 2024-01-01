#include<iostream>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]=s1[i]-'A'+97;
        }
          if(s2[i]>='A' && s2[i]<='Z')
        {
            s2[i]=s2[i]-'A'+97;
        }
    }
    int r=0;
  for(int i=0;i<s1.size();i++)
  {
      
      
            if(s1[i]>s2[i])
    {
        r=1;
        break;
    }
    else if(s1[i]<s2[i])
    {
       r=-1;
        break;
    }
  
      }
   cout<<r<<endl;
}