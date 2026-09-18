#include <iostream>
using namespace std;

class Student {
private:
    int roll;

public:
    // Default constructor
    Student() {
        roll = 0;
        cout << "Default Constructor called" << endl;
    }

    // Parameterized constructor
    Student(int r) {
        roll = r;
        cout << "Parameterized Constructor called" << endl;
        cout << "Roll No: " << roll << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Student s1;
    Student s2(101);

    return 0;
}