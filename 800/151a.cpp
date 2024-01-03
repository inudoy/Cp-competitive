#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n, k, l, c, d, p, nl, np;
    cin>> n>> k>> l>> c>> d>> p>> nl>> np;
    int total_drink=k*l;//first find total drink amount
    int each_person=total_drink/(nl);//then find for each friends amount 
    int total_lime=c*d;//now find the total lime 
    int totl_salt=p/np;//the amount of salt nedded for each person
    int mini1=min(each_person,total_lime);//than compare it the litre and lime here the lowes amount will be the number of the toast number can be made from it

    int mini=min(mini1,totl_salt)/n;//after that also compare it with salt again as it is also for the making purpose
    cout<<mini<<endl;
}