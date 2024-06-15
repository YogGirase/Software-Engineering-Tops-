/*13.Write a program to find the max number from given two numbers
using friend function*/
#include<iostream>
using namespace std;
class Maxnum{
    public:
        int num1,num2;
    public:
        int get_num(){
            cout<<"Enter a number1:";
            cin>>num1;
            cout<<"Enter a number2:";
            cin>>num2;
            
            cout<<"Number 1:"<<num1<<"  "<<"Number 2:"<<num2<<endl;
        }
        friend int max(Maxnum&obj);
};
int max(Maxnum&obj){
     return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;   
}
int main()
{
    Maxnum mx;
    mx.get_num();
    int maxnumber=max(mx);
    cout<<"MAx Number is: "<<maxnumber<<endl;
    return 0;
}