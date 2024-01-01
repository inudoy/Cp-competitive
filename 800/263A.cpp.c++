//Beautiful Matrix
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
 
    int x[5][5];
    for(int i=0;i<5;i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>x[i][j];

          
            
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
          if (x[i][j]==1)
            {
                cout<<abs(2-i)+abs(2-j)<<" ";
            }
        }
        
    }
    
}