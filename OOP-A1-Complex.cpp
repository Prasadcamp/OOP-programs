#include<iostream>
using namespace std;
class complex
{
	float real;
	float img;
	public:
	friend complex operator+(complex,complex);
	friend complex operator*(complex,complex);
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
	temp.img=d.img+c.img;
	return temp;
}

complex operator*(complex c,complex d)
{
	complex temp;
	temp.real=c.real*d.real-c.img*d.img;
	temp.img=c.real*d.img+c.img*d.real;
	return temp;
}

ostream & operator << (ostream &out, complex &c)
{
    if(c.img>=0)
	    out<<c.real<<"+"<<c.img<<"i\n";
    else
	    out<<c.real<<c.img<<"i\n";		
    return out;
}

istream & operator >> (istream &in,  complex &c)
{
    cout << "Enter Real Part : ";
    in >> c.real;						
    cout << "Enter Imaginary Part : ";
    in >> c.img;
    return in;
}

int main()
{
	complex c1,c2,c3;
	int ch;
	cout<<"In the beginning :-\n";
	cout<<c1;			//default constructor
	cout<<c2<<endl;
	cin>>c1;		//calling of operator overloading function
	cin>>c2;
	do
	{
		cout<<"\n--------------------\n       MENU\n--------------------\n1.Addition\n2.Multiplication\n3.Exit\n";
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: c3=c1+c2;
				    cout<<"\nAddition : ";
				    cout<<c3;
			        break;
			case 2: c3=c1*c2;
				    cout<<"\nMultiplication : ";
				    cout<<c3;
			        break;
			case 3: break;
			default:cout<<"Invalid choice\n";
		}
	} while(ch!=3);
	return 0;
}