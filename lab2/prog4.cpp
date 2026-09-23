#include <iostream>
using namespace std;

void updateByValue(int s) {
    s = s + (s * 10) / 100;
}

void updateByReference(int &s) {
    s = s + (s * 10) / 100;
}

void updateByAddress(int *s) {
    *s = *s + (*s * 10) / 100;
}

int main() {
    int salary = 50000;
    
    cout << "Initial Salary: " << salary << "\n\n";
    
    updateByValue(salary);
    cout << "After Call by Value (No change): " << salary << endl;
    
    updateByReference(salary);
    cout << "After Call by Reference (Updated): " << salary << endl;
    
    updateByAddress(&salary);
    cout << "After Call by Address (Updated): " << salary << endl;
    
    return 0;
}