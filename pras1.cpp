#include <iostream>
using namespace std;

int main()
{
    int a[10],n,i,sum=0;
    cout<<"enter number of elemnts\n";
    cin>>n;
    cout<<"Enter the elements";
    for(i=0;i<n;i++)
     {  
       cin>>a[i];
       sum=sum+a[i];
     }
     cout<<"Sum all elements of array is"<<sum<<"\n";
     return 0;
}
     
