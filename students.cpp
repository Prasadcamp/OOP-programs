#include <iostream>
using namespace std;
const int m =50;
class students{
			private:
			int roll_no[m];
			int marks[m];
			int count;
			public:
			void CNT(void){count = 0;}
			void getdata(void);
			void displaydata(void);
			void min_marks(void);
			void max_marks(void);
			void average(void);
};
void students :: getdata(void){
	cout << "Enter student roll number:";
	cin >> roll_no[count];
	cout << "Enter the marks :";
	cin >> marks[count];
	count++;
}
void students :: displaydata(void){
	for (int i=0; i<count; i++){
		cout << "Roll Number = "<< roll_no[i];
		cout << "\t Marks = "<< marks[i];
	}
}
void students :: min_marks(void){
	for (int i = 0; i<count; i++){
		float min = marks[0];
		if(min > marks[i+1])
			min = marks[i+1];
	}
	cout << "Minimum marks of student in subject ="<< min;
		
}
void students :: max_marks(void){
	for (int i = 0; i<count; i++){
		float max = marks[0];
		if(max < marks[i+1])
			max = marks[i+1];
	}
	cout << "Maximum marks of studnet in subject ="<< max;	
}
void students :: average(void){
	float sum, avg;
	sum = 0:
	for (int i=0: i<count; i++){
		sum = sum + marks[i];
	}
	avg = sum/count;
	cout << "average marks students scored in subject is"<< avg;
}
int main(){
	students data;
	data.CNT();
	int x;
	do
	{
		cout << "\nSelect an Option from following(enter valid number)";
		cout << "\n1 : Enter the student data";
		cout << "\n2 : Display the data";
		cout << "\n3 : Minimun marks scored by student";
		cout << "\n4 : Maximum marks scored by student";
		cout << "\n5 : Average nmarks scored by studemnt";
		cout << "\n6 : Quit";
		cout << "\n\n Please select option :";
		
		cin >> x;
		
		switch(x){
			case 1 : data.getdata(); break;
			case 2 : data.displaydata(); break;
			case 3 : data.min_marks(); break;
			case 4 : data.max_marks(); break;
			case 5 : data.average(); break;
			case 6 : break;
			default : cout << "Error in input; try again\n";
		}
	} while(x != 5);
return 0;
}



































			
