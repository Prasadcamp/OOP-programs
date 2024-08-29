#include <iostream>
using namespace std;

int main(){
             int choice,Y=1;
             float a,b;
             
             while(Y==1){
             
             cout<<" 1=+   2=-  3=*  4=/  \n";
             cout<<"enter the choice of operation";
             cin>>choice;
             cout<<"Enter the 1st number a & 2nd number b: \n";
             cin>>a>>b;
             
            
             switch(choice){
             case 1:
                    cout<<"Addittion of two numbersis : "<<a+b;
                    break;
             case 2:
                    cout<<"sub is: "<<a-b;
                    break;
             case 3: 
                    cout<<" multiplication : "<<a*b;
                    break;
             case 4:
                    cout<<"divisiuon is : "<<a/b;
                    break;             
             default:
                    cout<<"ERROR CHOICE RE-ENTER\n";
                    break;
                          }      
             cout<<" do you want to continue ?  enter 0 to exit or 1 to cont   \n";
             cin>>Y;
                                    
             }
             return 0;
}             
             
             
                    
               
                             
