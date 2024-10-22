#include<iostream>
using namespace std;
int n;
template<class T>
class mysort
{
	private :
		T a[20];
	public :
		void read();
		void display();
		void sort();
};

template<class T>
void mysort<T>::read()
{
	cout<<"\nEnter the number of the elements you want to insert : ";
	cin>>n;
	cout<<"\nEnter the numbers : "<<endl;
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
}

template<class T>
void mysort<T>::display()
{
    cout<<a[0];
	for(int i=1;i<n;i++)
		{
			cout<<", "<<a[i];
		}	
		cout<<endl;
}

template<class T>
void mysort<T>::sort()
{
	T temp;
	for(int i=0;i<(n-1);i++)
	{
		for(int j=(i+1);j<n;j++)
		{
			if(a[j]<a[i])	
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;		
			}				
		}	
		cout<<"The passes are :-";
		for(int k=0;k<n;k++)								//To display Passes
		{
			cout<<" "<<a[k];
		}
		cout<<endl;
	}	
}

int main()
{
	int ch;
	do {
		cout<<"-------------------------------\n             MENU\n-------------------------------\n" ;
		cout<<" 1. For integer array sorting" ;
		cout<<"\n 2. For float array sorting" ;
		cout<<"\n 3. Exit"<<endl;
		cout<<" Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:	mysort<int>s1;			//for sorting integer numbers
				    s1.read();
				    s1.sort();
				    cout<<"\nThe Elements in the SORTED order are as follows :-"<<endl;
				    s1.display();
				    break;
			case 2: mysort<float>s2;		//for sorting float numbers
				    s2.read();
				    s2.sort();
				    cout<<"\nThe Elements in the SORTED order are as follows :-"<<endl;
				    s2.display();
				    break;	
			case 3: cout<<" End of Program";
			        break;
			default:cout<<"\n Please, Enter the valid option "<<endl;			
		}	
	} while(ch!=3);
	return 0;
}