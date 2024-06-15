/*3.Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference.*/
#include<iostream>
using namespace std;
class Circle{
    public:
        float radius,area;
        float pi=3.14;
    public:
        void get_data(){
            cout<<"Enter Radius:";
            cin>>radius;
        }
        void calculate(){
            cout<<"[--------Circle's Area---------]"<<endl;
            area = pi * radius * radius;
            cout<<"Circle area is:"<<area<<endl;
            cout<<"[--------Circle's Circumference---------]"<<endl;
            area = 2 * pi * radius;
            cout<<"Circle circumference is:"<<area<<endl;


        }

};
int main()
{
    Circle c;
    c.get_data();
    c.calculate();
    return 0;
}