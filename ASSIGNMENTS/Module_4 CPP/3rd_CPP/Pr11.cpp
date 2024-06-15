/*11.Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Base* height
Circle: Pi * radius *radius*/
#include<iostream>
using namespace std;
        int Areaof(int length,int breadth){
            int rectangle;
            rectangle=length*breadth;
            cout<<"Area of Rectangle:"<<rectangle<<endl;
        }
        int Areaof(float base,float height){
            float traingle;
            traingle=0.5* base* height;
            cout<<"Area of Triangle:"<<traingle<<endl;
        }
        int Areaof(double radius,double pi=3.14){
            double circle;
            circle=pi*radius*radius;
            cout<<"Area of Circle:"<<circle<<endl;
        }

int main()
{
    // Calculate cal;
    Areaof(20,15);
    Areaof(45.0f,35.0f);
    Areaof(45.0);

    return 0;
}