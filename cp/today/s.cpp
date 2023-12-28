#include<iostream>
using namespace std;

struct employee //can use typedef for shortcurt...
{
   int eid;
   char favnam;
   float salary;
};
/* typedef struct employee //can use typedef for shortcurt...
{
   int eid;
   char favnam;
   float salary;
}ep;
 int main()
 {
    ep udoy;
    udoy.eid=1;
    udoy.favnam='l';
    udoy.salary=10000002;

    cout<<"values are"<<udoy.eid<<endl;
       cout<<"values are"<<udoy.favnam<<endl;
          cout<<"values are"<<udoy.salary<<endl;
    
    
 }*/
 int main()
 {
    struct  employee udoy;
    udoy.eid=1;
    udoy.favnam='l';
    udoy.salary=10000002;

    cout<<"values are"<<udoy.eid<<endl;
       cout<<"values are"<<udoy.favnam<<endl;
          cout<<"values are"<<udoy.salary<<endl;
    
    
 }