//Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;

class Matrix 
{
    int arr[3];
public:
    void accept() {
        cout << "Enter Matrix Elements (3 values): ";
        for (int i = 0; i < 3; ++i) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "Matrix Elements: ";
        for (int i = 0; i < 3; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    Matrix operator+(const Matrix& other) {
        Matrix result;
        for (int i = 0; i < 3; ++i) {
            result.arr[i] = arr[i] + other.arr[i];
        }
        return result;
    }
};

int main() {
    Matrix m1, m2, m3;
    cout << "Enter elements for the first matrix:\n";
    m1.accept();
    cout << "Enter elements for the second matrix:\n";
    m2.accept();

    m3 = m1 + m2;

    cout << "\nFirst Matrix:\n";
    m1.display();
    cout << "\nSecond Matrix:\n";
    m2.display();
    cout << "\nSum of Matrices:\n";
    m3.display();

    return 0;
}

