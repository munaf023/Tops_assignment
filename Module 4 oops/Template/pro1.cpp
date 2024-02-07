#include <iostream>
using namespace std;

template <class T>
void swap_values(T& x, T& y) {
    T temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Before swapping: a = "<< a << ", b = "<< b << endl;
    
    swap_values(a, b);
    cout << "After swapping: a = "<< a << ", b = "<< b << endl;
    return 0;
}

