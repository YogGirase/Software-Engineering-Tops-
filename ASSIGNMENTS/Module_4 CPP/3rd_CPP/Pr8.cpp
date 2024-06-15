/*8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
*/
#include<iostream>
using namespace std;
int mathematics(int a,int b,int c,int d){
    int result=0;
    cout<<"[---Addition---]\n";
    result=a+b+c+d;
    cout<<"Addition "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<":"<<result<<endl;

}
int mathematics(int x,int y){
    int result=0;
    cout<<"[---Substraction---]\n";
    result=x-y;
    cout<<"Substraction "<<x<<"-"<<y<<":"<<result<<endl;
}
int mathematics(double p,double q,int r){
    double result=0;
    cout<<"[---Multiplication---]\n";
    result= p * q *r;
    cout<<"Multiplication "<<p<<"*"<<q<<"*"<<r<<":"<<result<<endl;

}
int mathematics(double a,double b,char operation){
    double result=0;
    if (operation == '/')
    {
        cout<<"[---Division---]\n";
        result=a/b;
        cout<<"Division "<<a<<"/"<<b<<":"<<result<<endl;
    }
    else{
        cout<<"Invalid operation..\n";
    }
    
    
}
int main()
{
    mathematics(10,10,10,10);
    mathematics(10,5);
    mathematics(20,2,3);
    mathematics(10.0,3.0,'/');

    return 0;
}