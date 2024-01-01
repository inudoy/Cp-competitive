#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
 int min=0;
 int max=0;
//  int maxi,mini;

    for (int i = 0; i < n; i++)
    {
      cin>>a[i];

         if(a[i]>a[max])
   {
    // max=a[i];

    max=i;
       
      }
     if(a[i]<=a[min]){
        //  min=a[i];
      min=i;
     }
    }

      
   
   if (max>min)
   {
    min+=1;
  
   }

 
     cout<<max+(n-1)-min;
  
   
    
}