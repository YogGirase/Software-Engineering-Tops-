/*2. Write a C++ Program to find Area of Rectangle using inheritance*/
#include<iostream>
using namespace std;
class Shape{
    public:
        int length,width;
    public:
        int get_data(){
            cout<<"Enter Length:";
            cin>>length;
            cout<<"Enter Width:";
            cin>>width;
        }
        int show_data(){
            cout<<"Length:"<<length<<"  Width:"<<width<<endl;
        }
};
class Area:public Shape{
    public:
        int rectangle;
    public:
        int calculate(){
            get_data();
            show_data();
            rectangle=length*width;
        }
        int display(){
            cout<<"Area of Rectangle:"<<rectangle<<endl;
        }
};
int main()
{
    Area ar;
    ar.calculate();
    ar.display();
    return 0;
}