/*7. Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid.
*/
#include<iostream>
using namespace std;
class Day{
    public:
        int date,month,year;
    public:
        int get_data(){
            cout<<"Enter Day:";
            cin>>date;
            cout<<"Enter Month:";
            cin>>month;
            cout<<"Enter Year:";
            cin>>year;
        }
        int set_data(int d,int m,int y){
            date = d;
            month = m;
            year = y;
        }
        bool validate(){
            if (date < 1 || date > 31)
            {
                return false;
            }
            if (month<1||month>12)
            {
                return false;
            }
            if((month == 4 || month == 6 || month == 9 || month == 11) && date > 30){
                return false;
            }
            if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if (date > 29)
                return false;
            } else {
                if (date > 28)
                    return false;
            }
            }

            return true;
        }
        int diplay_date(){
            cout<<date<<"/"<<month<<"/"<<year;
        }
        
};
int main()
{
    int day,month,year;
    Day d;
    d.get_data();
    d.diplay_date();
    if (d.validate())
    {
        cout<<" Date is Valid..";
    }
    else
    {
        cout<<" Date is not Valid..";
    }
    
    

    return 0;
}