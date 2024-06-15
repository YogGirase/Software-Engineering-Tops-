/*3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;
class Person{
    public:
        string name;
        int age;
    public:
        int get_data(){
            cout<<"Enter a name:";
            cin>>name;
            cout<<"Enter age:";
            cin>>age;
        }
};
class Student:public Person{
    public:
        int marks;
        int percentage;
    public:
        int get_std(){
            get_data();
            cout<<"Enter a marks:";
            cin>>marks;
            
            percentage=marks/5;
        }
        int show_std(){
            cout<<"[---Student Detail---]\n";
            cout<<"Student Name:"<<name<<endl;
            cout<<"Student age:"<<age<<endl;
            cout<<"Student Marks:"<<marks<<endl;
            cout<<"Percentage:"<<percentage<<endl;
        }
};
class Teacher:public Person{
    public:
        int salary;
    public:
        int get_teacher(){
            get_data();
            cout<<"Enter Teacher Salary:";
            cin>>salary;
        }
        int show_teacher(){
            cout<<"[---Teacher Detail---]\n";
            cout<<"Teacher Name:"<<name<<endl;
            cout<<"Teacher age:"<<age<<endl;
            cout<<"Teacher Salary:"<<salary<<endl;
        }
};
int main()
{
    Student st;
    Teacher tch;
    
    cout<<"[----Student Details---]\n";
    st.get_std();
    st.show_std();

    cout<<"\n[---Teacher Details---]\n";
    tch.get_teacher();
    tch.show_teacher();
    return 0;
}