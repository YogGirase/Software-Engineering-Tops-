/*3. Write a C++ program to create a class called Car that has private member variables for 
company, model, and year. 
Implement member functions to get and set these variables.*/
#include<iostream>
using namespace std;
class Car{
    private:
    string car_company;
    string car_model;
    int car_year;
    public:
    int get_details(){
        cout<<"Enter Car company:";
        getline(cin, car_company);
        cout<<"Enter Car Model:";
        getline(cin, car_model);
        cout<<"Enter Car Year:";
        cin>>car_year;
    } 
    int set_data(string company,string model,int year){
        car_company = company;
        car_model = model;
        car_year = year;
    }
    int display_car_details(){
        cout<<"Car Company:"<<car_company<<endl;
        cout<<"Car Model:"<<car_model<<endl;
        cout<<"Car Year:"<<car_year<<endl;
    }

};
int main()
{
    Car c;
    c.get_details();
    c.display_car_details();
    return 0;
}