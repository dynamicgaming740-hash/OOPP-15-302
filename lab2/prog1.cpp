#include <iostream>
using namespace std;

int main() {
    double salary = 50000.0;
    
    double &newSalary = salary;
    
    newSalary = newSalary + (newSalary * 0.10);
    
    cout << "Updated Salary (via Reference): " << salary << endl;
    
    return 0;
}