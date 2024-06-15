//1. Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template<typename T>
T swap_num(T& x,T& y){
    T temp;
    temp=x;
    x=y;
    y=temp;
    return 0;
}
int main()
{
    int x,y;
    x=10,y=12;
    cout<<"---[Before swapping]---\n";
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
    swap_num(x,y);
    cout<<"---[After swapping]---\n";
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
    return 0;
}