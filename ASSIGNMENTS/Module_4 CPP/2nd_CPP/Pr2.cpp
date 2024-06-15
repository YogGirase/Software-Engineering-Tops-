//2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class Calculator{
    public:
    int num1,num2;
    public:
    Calculator(int n1,int n2){
        num1=n1;
        num2=n2;
        
    }
    int add(){
        return num1+num2;
    }
    int sub(){
        return num1-num2;
    }
    int multi(){
        return num1*num2;
    }
    int div(){
        return num1/num2;
    }
    
};
int main()
{
    int num1,num2;
    cout<<"Enter Num1:";
    cin>>num1;
    cout<<"Enter Num2:";
    cin>>num2;
    Calculator calcy(num1,num2);
    
    cout<<"Addition:"<<calcy.add()<<endl;
    cout<<"Substraction:"<<calcy.sub()<<endl;
    cout<<"Division:"<<calcy.div()<<endl;
    cout<<"Multiplication:"<<calcy.multi()<<endl;
    return 0;
}