/*
Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.
*/
#include<iostream>
using namespace std;
class Person{
    private:
        string name;
        int age;
        string country;
    public:
        //set function;
        void set_data(string p_name,int p_age,string p_country){
            name =  p_name;
            age = p_age;
            country = p_country;
        }
        // get funtion;
        string get_name(){
            return name;
        }
        int get_age(){
            return age;
        }
        string get_county(){
            return country;
        }
};
int main()
{
    Person p;
    //set the data;
    p.set_data("Yogesh",22,"India");

    //display name usinng get function
    cout<<"Person Name:"<<p.get_name()<<endl;
    cout<<"Person Age:"<<p.get_age()<<endl;
    cout<<"Person Country:"<<p.get_county()<<endl;
    return 0;
}