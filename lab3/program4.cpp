#include <iostream>
using namespace std;

double area(double radius)
{
    return 3.14 * radius * radius;
}

double area(double length, double width)
{
    return length * width;
}

int area(int side)
{
    return side * side;
}

double area(double base, double height, bool triangle)
{
    return 0.5 * base * height;
}

int main()
{
    double radius, length, width, base, height;
    int side;

    cout << "Enter radius: ";
    cin >> radius;
    cout << "Circle Area = " << area(radius) << endl;

    cout << "Enter length and width: ";
    cin >> length >> width;
    cout << "Rectangle Area = " << area(length, width) << endl;

    cout << "Enter side: ";
    cin >> side;
    cout << "Square Area = " << area(side) << endl;

    cout << "Enter base and height: ";
    cin >> base >> height;
    cout << "Triangle Area = " << area(base, height, true) << endl;

    return 0;
}