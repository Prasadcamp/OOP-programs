#include <iostream>
using namespace std;
class complex
{
    float real;
    float img;
    public:
    friend complex operator+(complex,complex);
    friend complex operator-(complex,complex);
    friend ostream & operator<<(ostream&,complex&);
    friend istream & operator>>(istream&,complex&);
    complex()
    {
        real=0;
        img=0;
    }
    ~complex(){}
};

complex operator+(complex c,complex d)
{
    complex temp;
    temp.real=d.real+c.real;
    temp.img=d.img+d.real;
    return temp;
}
ostream & operator <<(ostream &out,complex &c)
{
    if(c.img>=0)
        out<<c.real<<"+"<<c.img<<"i\n";
    else
        out<<c.real<<c.img<<"i\n";
    return out;
}
istream & operator >>(istream &in,complex&c)
{
    cout<<"Enter real ";
    in>>c.real;
    cout<<"Enter imag";
    in>>c.img;
    return in;
}
 int main()
{
    complex c1,c2,c3;
    int ch;
    cout<<c1;
    cout<<c2;
    cin>>c1;
    cin>>c2;
    do
    {
        cout<<"choice enter";
        cin>>ch;
        switch(ch)
        {
            case1:c3=c1+c2;
                    cout<<"addittion";
                    cout<<c3;
                  break;
            case3:break;
            default:cout<<"invalid";
        }
    }while(ch!=2);
    return 0;
}
    
