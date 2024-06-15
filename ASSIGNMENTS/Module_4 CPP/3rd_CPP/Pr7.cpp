/*7. Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance*/
#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"This is First class using constructur.."<<endl;
        }
};
class B:public A{
    public:
        B(){
            cout<<"This is derived class of A using constructor.."<<endl;
        }
};
class C:public B{
    public:
        C(){
            cout<<"This is derived class of B using constructor.."<<endl;
        }
};
int main()
{
    C ce;
    return 0;
}