#include <iostream>
using namespace std;

// Swap by Value
void swapByValue(int a, int b)
{
    cout<<"before swap:"<<a<<" "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;

    cout << "After Swap by Value: " << a << " " << b << endl;
}

// Swap by Address (Pointer)
void swapByAddress(int *a, int *b)
{
    cout<<"before swap:"<<*a<<" "<<*b<<endl;
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "After Swap by Address: " << *a << " " << *b << endl;
}

// Swap by Reference
void swapByReference(int &a, int &b)
{
    cout<<"before swap:"<<&a<<" "<<&b<<endl;
    int temp = a;
    a = b;
    b = temp;

    cout << "After Swap by Reference: " << a << " " << b << endl;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    swapByValue(a, b);
    cout << "Original values after Swap by Value: " << a << " " << b << endl;

    swapByAddress(&a, &b);
    cout << "Values after Swap by Address: " << a << " " << b << endl;

    swapByReference(a, b);
    cout << "Values after Swap by Reference: " << a << " " << b << endl;

    return 0;
}