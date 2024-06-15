//2. Write a program of to sort the array using templates
#include<iostream>
using namespace std;
template <typename T> 
T Sortarr(T a[], int n)
{
    for (int i = 0; i < 5 - 1; i++)
        for (int j = 5 - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}
int main()
{
    int  a[5]={10,40,60,20,50};
    
    cout<<"---[Before Sorting]---\n";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
        cout<<endl;
    
    Sortarr<int>(a,5);
    cout << "---[After Sorted array]---\n";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}