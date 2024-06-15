/*1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int age;
    public:
        int get_details(){
            cout<<"Enter Cricketer Name:";
            // cin.ignore();
            getline(cin,name);
            cout<<"Enter Cricketer Age:";
            cin>>age;
        }
        int display_details(){
            cout<<"Cricketer Name:"<<name<<endl;
            cout<<"Crickter Age:"<<age<<endl;
        }
};
class Batsman:public Cricketer{
    public:
        int total_runs;
        float average_runs;
        int best_performance;
        int total_matches;
    public:
        int input_data(){
            get_details();
            cout<<"Enter Total Matches:";
            cin>>total_matches;
            cout<<"Enter Total Runs:";
            cin>>total_runs;
            cout<<"Enter Best Performance:";
            cin>>best_performance;
        }
        int  calculate_average(){
            average_runs= total_runs / total_matches;
            return 0;
        }
        int display_data(){
            display_details();
            cout<<"Total Matches:"<<total_matches<<endl;
            cout<<"Total Runs:"<<total_runs<<endl;
            cout<<"Average Runs:"<<average_runs<<endl;
            cout<<"Best Performance:"<<best_performance<<endl;
        }
};
int main()
{
    Batsman bt;
    cout<<"<---Input Data--->\n";
    bt.input_data();
    bt.calculate_average();
    cout<<"\n<---Display Data--->\n";
    bt.display_data();
    return 0;
}