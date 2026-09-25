#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c = 0)
{
    return a + b + c;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    int a, b, c;
    double x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum = " << add(a, b) << endl;

    cout << "Enter third integer: ";
    cin >> c;
    cout << "Sum = " << add(a, b, c) << endl;

    cout << "Enter two decimal numbers: ";
    cin >> x >> y;
    cout << "Sum = " << add(x, y) << endl;

    return 0;
}