/*12.Write a program to swap the two numbers using friend function
without using third variable*/
#include<iostream>
using namespace std;
class Swapnumber{
    public:
        int num1,num2,temp;
    public:
        friend int swap(Swapnumber&obj);
        void input(){
            cout<<"Enter a number1:";
            cin>>num1;
            cout<<"Enter a number2:";
            cin>>num2;
        }
        
        void display(){
            cout<<"Number 1:"<<num1<<" Number 2:"<<num2<<endl;
        }
};
int swap(Swapnumber &obj) {
    obj.temp = obj.num1;
    obj.num1 = obj.num2;
    obj.num2 = obj.temp;
}
int main()
{
    Swapnumber sw;
    sw.input();
    cout<<"---[Before Swapping]---"<<endl;
    sw.display();
    swap(sw);
    cout<<"---[After Swapping]---"<<endl;
    sw.display();

    
    return 0;
}