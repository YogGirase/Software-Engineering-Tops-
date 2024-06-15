/*Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter.*/
#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length,width;
        int area;
    public:
        int get_data(){
            cout<<"Enter a length of rectangle:";
            cin>>length;
            cout<<"Enter a width of rectangle:";
            cin>>width;

        }
        void calculate(){
            cout<<"----------Calculate Rectangle of area---------"<<endl;
            area = width * length;
            cout<<"Rectangle of Area:"<<area<<endl;
            cout<<"-------Calculate Parameter of Rectangle--------"<<endl;
            area = 2 * (length + width);
            cout<<"Parameters of Rectangle:"<<area<<endl;
        }
        
};
int main()
{
    Rectangle r;
    r.get_data();
    r.calculate();
    return 0;
}