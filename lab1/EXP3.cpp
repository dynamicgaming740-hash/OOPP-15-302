#include <iostream>
using namespace std;

// Inline function
inline int square(int n) {
    return n * n;
}

// Default argument
int add(int a, int b = 10) {
    return a + b;
}

// Function overloading
int multiply(int a, int b) {
    return a * b;
}

float multiply(float a, float b) {
    return a * b;
}

int main() {
    cout << "Square: " << square(5) << endl;

    cout << "Addition: " << add(20) << endl;
    cout << "Addition: " << add(20, 30) << endl;

    cout << "Integer multiplication: " << multiply(4, 5) << endl;
    cout << "Float multiplication: " << multiply(2.5f, 3.0f) << endl;

    return 0;
}