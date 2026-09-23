#include <iostream>
using namespace std;

void updateByReference(int &s) {
    s += s / 10;
}

void updateByPointer(int *s) {
    *s += *s / 10;
}

int main() {
    int salary1 = 50000;
    int salary2 = 60000;
    
    updateByReference(salary1);
    cout << "Salary after Reference Function: " << salary1 << endl;
    
    updateByPointer(&salary2);
    cout << "Salary after Pointer Function: " << salary2 << endl;
    
    return 0;
}