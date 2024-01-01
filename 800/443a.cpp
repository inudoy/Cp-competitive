
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set <char> a;
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            a.insert(s[i]);//as we input set so when we input the character similar character will be vanished 
            //and we will find the unique count of the charaters....
    }
    cout<<a.size()<<endl;
    return 0;
}