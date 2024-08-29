#include <iostream>
using namespace std;

int main()

{
   int i,n,p;
   
   cout<<"Enter any  number:_ ";cin>>n;
   
   for(i=0;i<=0;i++)
   {
   
      if(n%i==0)
      {
          p++;
      }
    }
    if(p==2)
    {
            cout<<"it is a prime number"<<endl;
     }
     else
     {
            cout<<"it is not a prime number"<<endl;
      }
      return 0;
}

