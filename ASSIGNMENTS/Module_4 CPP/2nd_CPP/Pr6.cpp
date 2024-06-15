/*6.Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor.*/
#include<iostream>
using namespace std;
class Employee{
    private:
    string Emp_name;
    int Emp_Id;
    int Emp_salary;
    char performance;
    public:
        Employee(string name,int id,int salary){
            Emp_name=name;
            Emp_Id=id;
            Emp_salary=salary;
        }
        
        int performancebasesalary(char performance){
            switch (performance)
            {
            case 'A':
               Emp_salary *= 1.20; // 20% increament on salary
               cout<<"Well Done you have 20% increment in your salary..\n";
                break;
            case 'B':
                Emp_salary *= 1.10; // 10% increament on salary
                cout<<"Well Done you have 10% increment in your salary..\n";
                break;
            case 'C':
                Emp_salary *= 1.05; // 5% increament on salary
                cout<<"~Well Done~ you have 5% increment in your salary..\n";
                break;
            case 'D':
                cout<<"Please give more efforts for company..\n";//  No increment on salary
                break;
            default:
                break;
            }
        }
        int display(){
            cout<<"Employee Name:"<<Emp_name<<endl;
            cout<<"Employee Id:"<<Emp_Id<<endl;
            cout<<"Employee Salary:"<<Emp_salary;
        }

};
int main()
{
    string Emp_name;
    int Emp_Id;
    int Emp_salary;
    char performance;
        cout<<"Enter a Name:";
        getline(cin,Emp_name);
        cout<<"Enter employee Id:";
        cin>>Emp_Id;
        cout<<"Enter employee salary:";
        cin>>Emp_salary;
        cout<<"Enter Employee Performance in Grade (A,B,C,D,E):";
        cin>>performance;
    Employee emp(Emp_name,Emp_Id,Emp_salary);
    emp.performancebasesalary(performance);
    emp.display();
    
    return 0;
}