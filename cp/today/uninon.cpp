#include<iostream>
using namespace std;

union  udoy
{
    int hi;
    char bye;
    float hmm;
};


int main()
{
union udoy u1;
u1.hi=456;

cout<<u1.hi;//cant use two or more ata atime..in union
}