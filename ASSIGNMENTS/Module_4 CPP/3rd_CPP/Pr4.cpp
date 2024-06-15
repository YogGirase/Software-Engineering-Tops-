/*4. Write a C++ Program display Student Mark sheet using Multiple inheritance*/
#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int seat_no;
        int standard;
    public:
        int get_data(){
            cout<<"Enter student name:";
            cin>>name;
            cout<<"Enter Seat Number:";
            cin>>seat_no;
            cout<<"Enter Standard:";
            cin>>standard;
        }
        int display_data(){
            cout<<"\n-----[Marksheet]-----\n";
            cout<<"Student Name:"<<name<<"         "<<"Std:"<<standard<<endl;
            cout<<"Seat Number"<<seat_no<<endl;
        }
};
class Subject{
    public:
        int math,physics,bio,chemistry,english;
    public:
        int get_sub(){
            cout<<"---[Enter Marks]---\n";
            cout<<"MATH:";
            cin>>math;
            cout<<"PHYSICS:";
            cin>>physics;
            cout<<"BIOLOGY:";
            cin>>bio;
            cout<<"CHEMISTRY:";
            cin>>chemistry;
            cout<<"ENGLISH:";
            cin>>english;
        }
        int display_sub(){
            cout<<"English    :"<<english<<endl;
            cout<<"Mathematics:"<<math<<endl;
            cout<<"Physics    :"<<physics<<endl;
            cout<<"Chemistry  :"<<chemistry<<endl;
            cout<<"Biology    :"<<bio<<endl;
        }
};
class Marksheet:public Student,public Subject{
    public:
        int total_marks=0;
        float percentage=0;
    public:
        int calculate(){
            get_data();
            get_sub();
            total_marks=math+physics+chemistry+bio+english;
            percentage=total_marks/5.0;
        }
        int show_marksheet(){
            display_data();

            display_sub();
            cout<<"Total Marks: "<<total_marks<<"         "<<"Percantage:"<<percentage<<endl;
        }
};
int main()
{
    Marksheet mrk;
    mrk.calculate();
    mrk.show_marksheet();
    return 0;
}