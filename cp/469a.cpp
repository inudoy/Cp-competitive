
// #include<iostream>
// #include<algorithm>
// using namespace std;


// int main()
// {
//     int m,p,q;
//     int z[250];
//     int i,j;
//     cin>>m>>p;
//     // int a[p];
//     // int b[q];
//     int c=1;
//     // int f=0;
//     // int f1=0;
//     for(i=0;i<p;i++)
//     {
//         cin>>z[i];
//         //  if(a[i]==m )
//         //     {
//         //         f=1;
//         //     }
//     }
//     cin>>q;
//         for(i=p;i<p+q;i++)
//         {
//             cin>>z[i];
//             // if(b[j]==m )
//             // {
//             //     f1=1;
//             // }
           
            
//         }
        
//         sort(z,z+(p+q));
        
//         for(int i=0;i<p+q;i++)
//         {
//             if(z[i]!=z[i+1])
//             {
//                 c++;
                
//             }
//             else
//             {
//                 continue;
//             }
//         }
//          if(m ==c){
//         cout << "I become the guy." <<endl;
//     }else{
//         cout << "Oh, my keyboard!" << endl;
//     }
        
        
    
//     // if(f==1 || f1==1)
//     // {
//     //     cout<<"I become the guy.";
//     // }
//     // else
//     // {
//     //     cout<<"Oh, my keyboard!";
//     // }
    
// }
#include<iostream>
 #include<algorithm>
using namespace std;

int main()
{
    int array[250];
    int n , p , q;
    cin >> n >> p;
    int count = 0;

    for(int i =  0 ; i < p ; i++){
        cin >> array[i];
    }
    cin >> q;
    for(int i = p ; i < p + q ; i++){
        cin >> array[i];
    }

    sort(array , array+(p+q));

    for(int i = 0 ; i < p+q ; i++){
        if(array[i] != array[i+1]){
            count++;
        }
    }

    if(n == (count)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}