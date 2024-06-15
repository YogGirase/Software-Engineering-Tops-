/*1. Write a program to find the multiplication values and the cubic values using
inline function*/
#include<iostream>
using namespace std;
inline int multiplication(int num,int factor=5){
    return  num*factor;
}
inline int cube(int num){
    return num*num*num;
}
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;

    cout<<"Multiplication value: "<<multiplication(num)<<endl;
    cout<<"Cubic Value of "<<num<<" is: "<<cube(num)<<endl;
    return 0;
}