//WAP to store details of any two student such as name
// ,roll,branch,.take input from user and show their details.
#include<iostream>

using namespace std;
class student{
    private:
        string name;
        int roll;
        string branch;
    public:
        void input(string n, int r, string b){
            name = n;
            roll = r;
            branch = b;
        }
        void show(){
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Branch: " << branch << endl;
        }
};


int main(){
    student s1, s2;
    string name;
    int roll;
    string branch;

    cout << "Enter details for student 1:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Roll: ";
    cin >> roll;
    cout << "Branch: ";
    cin >> branch;
    s1.input(name, roll, branch);

    cout << "Enter details for student 2:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Roll: ";
    cin >> roll;
    cout << "Branch: ";
    cin >> branch;
    s2.input(name, roll, branch);

    cout << "\nDetails of student 1:" << endl;
    s1.show();

    cout << "\nDetails of student 2:" << endl;
    s2.show();

return 0;
}