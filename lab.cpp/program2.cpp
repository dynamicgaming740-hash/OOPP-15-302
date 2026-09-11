//design a program to convert a procedural implementation of a student record system
 //into an object oriented approch using class and object 
 #include<iostream>
 
 using namespace std;
 class student{
    private:
            string name;
            int roll;
            string branch;
            float marks;
    public:
        void input(string n, int r, string b, float m){
            name = n;
            roll = r;
            branch = b;
            marks = m;
        }
        void show(){
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Branch: " << branch << endl;
            cout << "Marks: " << marks << endl;
        }
        
 };
 
 
 int main(){
    student s1, s2;
    string name;
    int roll;
    string branch;
    float marks;
 
    cout << "Enter details for student 1:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Roll: ";
    cin >> roll;
    cout << "Branch: ";
    cin >> branch;
    cout << "Marks: ";
    cin >> marks;
    s1.input(name, roll, branch, marks);
 
    cout << "Enter details for student 2:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Roll: ";
    cin >> roll;
    cout << "Branch: ";
    cin >> branch;
    cout << "Marks: ";
    cin >> marks;
    s2.input(name, roll, branch, marks);
 
    cout << "\nDetails of student 1:" << endl;
    s1.show();
 
    cout << "\nDetails of student 2:" << endl;
    s2.show();
 
 return 0;
 }