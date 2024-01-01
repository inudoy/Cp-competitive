// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
/*if m*a >b than we can buy b as it is smaller than we have to find the remaining ticket that we can buy with a ...then if the a is greater than b than we can buy again b so we divide how many tickets we can buy in first apperane through m ..then as b is smaller so we can buy b thats why we add be and if the r is less than b than we have to buy a ticket through the rubbles thats why we add r to last as r is the price of remaining a of n ticket ..if the m*a=<b than we have to buy the a tickets as it is small so we just multipy n*a; */

int main() {
   int n,m,a,b;
   cin>>n>>m>>a>>b;
   
   if(m*a>b)
  
   {
       int r=(n%m)*a;
       if(r>b)
       {
           cout<<n/m*b+b;
       }
       else
       {
           cout<<n/m*b+r;
       }
       
   }
   else
   {
    cout<<n*a;
   }
    

    return 0;
}