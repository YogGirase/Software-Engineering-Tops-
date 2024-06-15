/*10.Write a program to concatenate the two strings using Operator Overloading*/
#include<iostream>
#include<cstring>
using namespace std;
class Addstring{
    private:
        char str1[50],str2[50];
    public:
        Addstring(const char* s1, const char* s2) {
        strcpy(str1, s1);
        strcpy(str2, s2);
    }
        void operator +() {
        cout << "\nConcatenation: " << str1<<" "<<str2;
    }
};
int main()
{
    char str1[50],str2[50];
            cout<<"String1:";
            cin>>str1;
            cout<<"String2:";
            cin>>str2;
    Addstring astr(str1,str2);
    +astr;
    return 0;
}