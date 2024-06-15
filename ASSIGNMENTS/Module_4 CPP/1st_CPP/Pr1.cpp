//1. WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator
{
public:
    int add,sub,multi,div;
    int num1,num2;
public:
    int  get_num(){
        cout<<"Enter Number1:";
        cin>>num1;
        cout<<"Enter NUmber2:";
        cin>>num2;
    }
    int addition(){
        add=num1+num2;
        cout<<"Addition:"<<add<<endl;
    }
    int substraction(){
        sub= num1 - num2;
        cout<<"Substraction:"<<sub<<endl;
    }
    int multiplication(){
        multi = num1 * num2;
        cout<<"Multiplication:"<<multi<<endl;
    }
    int division(){
        div = num1 / num2;
        cout<<"Division:"<<div<<endl;
    }


};

int main()
{
    calculator c;
    c.get_num();
    c.addition();
    c.get_num();
    c.substraction();
    c.get_num();
    c.multiplication();
    c.get_num();
    c.division();
    return 0;
}