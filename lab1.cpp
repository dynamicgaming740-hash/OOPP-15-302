#include <iostream>
using namespace std;

void input(string &name, string &branch, int &rollNo, int marks[5])
{
    cout << "Enter the student name: ";
    cin >> name;

    cout << "Enter the branch: ";
    cin >> branch;

    cout << "Enter the roll no: ";
    cin >> rollNo;

    cout << "Enter the marks of five subjects:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
}

int findSum(int marks[5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    return sum;
}

void show(string name, string branch, int rollNo, int marks[5], int sum)
{
    cout << "\n----- Student Details -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Branch: " << branch << endl;
    cout << "Roll No: " << rollNo << endl;

    cout << "Marks: ";
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }

    cout << endl;
    cout << "Total Marks: " << sum << endl;
    cout << "Percentage: " << (sum / 5.0) << "%" << endl;
}

int main()
{
    string name, branch;
    int rollNo;
    int marks[5];

    input(name, branch, rollNo, marks);

    int sum = findSum(marks);

    show(name, branch, rollNo, marks, sum);

    return 0;
}