/*5. Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/
#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int rollno;
    public:
        int get_details(){
                cout<<"----[Input Details]----\n";
                cout<<"Enter Student Name:";
                cin>>name;
                cout<<"Enter Roll No:";
                cin>>rollno;
                      
        }
};
class Test:public Student{
    public:
        int sub1,sub2;
    public:
        int get_marks(){
            get_details();
                cout<<"Enter Sub 1 marks:";
                cin>>sub1;
                cout<<"Enter sub 2 marks:";
                cin>>sub2;            
        }
        int show_marks(){
            cout<<"Student name:"<<name<<endl;
            cout<<"Student Rollno:"<<rollno<<endl;
            cout<<"Student Obtain marks sub1:"<<sub1<<" sub2:"<<sub2<<endl;
        }
        
};
class Result:public Test{
    public:
        int total_marks=0;
    public:
        int display_result(){
            
            get_marks();
            cout<<"\n----[Student Details]----\n";
            show_marks();
            total_marks= (sub1 + sub2);
            cout<<"Total marks obatained by student:"<<total_marks<<endl;
        }
};
int main()
{
    Result re;
    re.display_result();
    return 0;
}