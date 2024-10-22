#include<iostream>
using namespace std;
class publication
{
protected:
    string title;
    float price;
public:
    void add()
    {
        cout<<"\nEnter Publication Information :-";
        cout<<"\nEnter Title or Publication : ";
            cin.ignore(); 
            getline(cin , title);
        cout<<"Enter Price of Publication : ";
            cin>>price ;
    }
    void display()
    {
        cout<<"\nTitle of Publication : "<< title;
        cout<<"\nPublication Price : "<< price;
    }
};

class books:public publication
{
    int page_count;
public:
    void add_book()
    {
        try
        {
            add();
            cout<<"Enter Page Count of Book : ";
            cin>>page_count;
            if(page_count<=0)
                throw page_count;
        } 
        catch(...)
        {
            cout<<"Invalid Page Count";
            page_count = 0;
        }
    }
    void display_book()
        {
            display();
            cout<<"\nPage count : "<<page_count<<endl;
        }
};

class tape:public publication
{
    float play_time;
public:
    void add_tape()
    {
    try {
        add();
        cout<<"Enter Play duration of Tape(in min) : ";
        cin>>play_time ;
        if(play_time <= 0)
            throw play_time;
    }
    catch(...)
    {
        cout<<"Invalid play time";
        play_time = 0;
    }
    }
    void display_tape()
    {
        display();
        cout<<"\nPlay time : "<<play_time<<" min"<<endl;
    }
};

int main()
{
    books b1[10];
    tape t1[10];
    int ch = 0 ,b_count = 0 ,t_count = 0;
    do {
        cout<<"\n---------- PUBLICATION INFORMATION SYSTEM ----------";
        cout<<"\n 1.Add information to books" ;
        cout<<"\n 2.Display information of books" ;
        cout<<"\n 3.Add information to Tapes " ;
        cout<<"\n 4.Display information of Tapes " ;
        cout<<"\n 5.Exit" ;
        cout<<"\n Enter Your Choice : ";
        cin>>ch ;
        switch(ch)
        {
            case 1: b1[b_count].add_book();
                    b_count++;
                    break;
            case 2: cout<<"\n---------- PUBLICATION INFORMATION SYSTEM (BOOKS) ----------";           
                    for(int j=0 ; j<b_count ;j++)
                        {
                        b1[j].display_book();
                        }
                    break;           
            case 3: t1[t_count].add_tape();
                    t_count++;
                    break;
            case 4: cout<<"\n---------- PUBLICATION INFORMATION SYSTEM (TAPES) ----------";
                    for(int j=0 ; j<t_count ;j++)
                    {
                    t1[j].display_tape();
                    }            
                    break;
            case 5: cout<<"End of Program";
                    break;
            default:cout<<"NOT A VALID CHOICE";                    
        }       
    } while(ch !=5) ;
    return 0 ;
}  
