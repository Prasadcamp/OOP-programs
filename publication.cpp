#include <iostream>
using namespace std;
class publication
{
      protected:
         string tittle;
         float price;
         
      public:
         void input1()
         
         {
         cin>>sw;=
         getline(cin,tittle);
         cin>price;
         };
         
         void display1()
         {
         cout<<" The tittle of publication is:\n";
         cout<<" The price of book is:\n";
         }
};
class book:public publication
{          
         int pagecount;
         
         public:
            void input2()
            {
            cout<<"Enter the page count of books";
            
            cin>>pagecount;
            };
            void display2()
            {
             cout<<"the count of book is:"<<pagecount;
            };
};
class tape:public publication
{
         float minutes;
         
         public:
         void input3()
         {
         cout<<"the time of audio is"<<minutes;
         };
};
int main()
{
         publication p;
         book b;
         tape t;
         p.input1();
         p.display1();
         b.input2();
         b.display2();
         t.input3();
         t.display3();
         return 0;
}
         
            
            
