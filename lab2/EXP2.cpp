#include <iostream>
using namespace std;

// Call by Value
void callByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference
void callByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by Address
void callByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10, b = 20;

    cout << "Before: " << a << " " << b << endl;

    callByValue(a, b);
    cout << "Call by Value: " << a << " " << b << endl;

    callByReference(a, b);
    cout << "Call by Reference: " << a << " " << b << endl;

    callByAddress(&a, &b);
    cout << "Call by Address: " << a << " " << b << endl;

    return 0;
}