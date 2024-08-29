#include <iostream>
using namespace std;
int main()
{
    int i,n,a[n],x;
    cout<<"Enter the size of n\n";cin>>n;

    for(i=0;i<n;i++){
       cin>>a[i];
     }
   cout<<"Enter numbert to be search";cin>>x;
   for(i=0;i<n;i++){
   if(a[i]==x){
   cout<<"element is found at "<<i;
   }
   }
  return 0;
}
   
