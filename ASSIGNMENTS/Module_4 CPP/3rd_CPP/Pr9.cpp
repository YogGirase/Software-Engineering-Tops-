#include <iostream>
using namespace std;

class Matrix {
public:
    int arr[5];

    void get_element();
    void display_element() const;
    Matrix operator+(const Matrix& x) const;  
};

void Matrix::get_element() {
    cout << "Enter elements: \n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
}

void Matrix::display_element() const {
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

Matrix Matrix::operator+(const Matrix& x) const {
    Matrix result;
    for (int i = 0; i < 5; i++) {
        result.arr[i] = arr[i] + x.arr[i];
    }
    return result;
}

int main() {
    Matrix m, n, result;
    m.get_element();
    n.get_element();

    cout << "Matrix m elements: ";
    m.display_element();

    cout << "Matrix n elements: ";
    n.display_element();

    result = m + n;

    cout << "Result of addition: ";
    result.display_element();

    return 0;
}
