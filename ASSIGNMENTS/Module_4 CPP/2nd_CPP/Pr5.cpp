/*
Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene.
*/
#include<iostream>
using namespace std;
class Triangle{
    private:
    int side1,side2,side3;
    public:
    int get_side(){
        cout<<"<---Get Side of Traingle--->"<<endl;
        cout<<"Enter Side1:";
        cin>>side1;
        cout<<"Enter Side2:";
        cin>>side2;
        cout<<"Enter Side3:";
        cin>>side3;
    }
    bool checktraigle(){
        if (side1==side2 && side2==side3)
        {
            cout<<"Triangle is Equalateral..";
        }
        else if (side1==side2 || side2==side3 || side3==side1)
        {
            cout<<"Triangle is Isosceles..";
        }
        else if (side1 != side2 && side2 != side3 && side1 != side3)
        {
           cout<<"Triangle is Scalene..";
        }
        else{
            cout<<"Invalid Triangle..";
        }
        
    }
};
int main()
{
    Triangle tr;
    tr.get_side();
    tr.checktraigle();
    return 0;
}