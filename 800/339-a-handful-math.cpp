#include<iostream>
#include<algorithm>
using namespace std;

 int main()
 {
     string s;
     cin>>s;
     int t=0;
     for(int i=0; i<s.size();i+=2)
     {
       for(int j=0;j<s.size()-1;j+=2)
       {
             if(s[j]>s[j+2]) 
         {
          swap(s[j],s[j+2]);
         }
       
       }
     }
       cout<<s;
 }
 