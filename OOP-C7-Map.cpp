#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
    {
    typedef map<string,int> mapType;
    string s_name;
    int pop;
    cout<<"Enter the name of the state : ";
    cin>>s_name;
    cout<<"Enter the population of the state : ";
    cin>>pop;
    
    mapType populationMap;
    populationMap.insert(pair<string, int>("Maharashtra", 7026357));
    populationMap.insert(pair<string, int>("Rajasthan", 6578936));
    populationMap.insert(pair<string, int>("Karanataka", 6678993));
    populationMap.insert(pair<string, int>("Punjab", 5789032));
    populationMap.insert(pair<string, int>("West Bengal", 6676291));
    populationMap.insert(pair<string, int>(s_name,pop));
    mapType::iterator iter;
    
    cout<<"\n-----POPULATION OF STATES IN INDIA-----\n";
    cout<<"\nSize of Population Map : "<<populationMap.size()<<"\n";
    string state_name;
    cout<<"\nEnter the name of state : ";
    cin>>state_name;
    iter=populationMap.find(state_name);
    if(iter!= populationMap.end())
        cout<<state_name<<"'s population is : "<<iter->second;
    else
        cout<<"Key is not in the Population Map"<<"\n";
    populationMap.clear();
    }
