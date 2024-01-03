#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
       if(abs(x-y)>=2)
       {
        c++;
       }
    }
    cout<<c;
}
//it was easy but i was busy 
//single but was thinking like a mingle