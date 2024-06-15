/*8. Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation
*/
#include<iostream>
using namespace std;
class Address {
private:
    string street;
    string city;
    string state;
    string country;

public:
    void get_data() {
        cout << "Enter street: ";
        getline(cin, street); 
        cout << "Enter city: ";
        getline(cin, city);
        cout << "Enter State: ";
        getline(cin, state);
        cout << "Enter Country: ";
        getline(cin, country);
    }
    string getFullAddress() {
        return street + ", " + city + ", " + state + ", " + country;
    }
};
class Student{
    private:
        string std_name;
        string std_class;
        int std_rollno;
        float std_marks;
        Address *add;
    public:
        Student() {
        add = new Address(); 
        }
        void get_std_details(){
            cout<<"Enter student name:";
            getline(cin,std_name);
            cout<<"Enter student class:";
            getline(cin,std_class);
            cout<<"Enter student rollno:";
            cin>>std_rollno;
            cout<<"Enter student marks:";
            cin>>std_marks;
            cin.ignore();
            add->get_data();
        }
         char calculate() {
        if (std_marks >= 90)
            return 'A';
        else if (std_marks >= 80)
            return 'B';
        else if (std_marks >= 70)
            return 'C';
        else if (std_marks >= 60)
            return 'D';
        else
            return 'E';
    }
        void displayInfo() {
        cout << "Name: " << std_name << endl;
        cout << "Class: " << std_class << endl;
        cout << "Roll Number: " << std_rollno << endl;
        cout << "Marks: " << std_marks << endl;
        cout << "Grade: " << calculate() << endl;
        cout << "Address: " << add->getFullAddress() << endl;
    }
    ~Student() {
        delete add; 
        }
        
};

int main()
{
    Student st;
    st.get_std_details();
    st.displayInfo();
    return 0;
}