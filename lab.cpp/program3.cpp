//writre a program to create a class for point having x and y create two method as input and show.
//inpurt method should take value of x and y from keyboard and show will print the value x and y.
 // create any two object in main and call input and show method respecrtively.
 #include<iostream>
 
 using namespace std;
 class point{
     private:
         int x, y;
     public:
         void input(){
             cin >> x >> y;
         }
         void show(){
             cout << "(" << x << ", " << y << ")" << endl;
         }
 };
 
 
 int main(){
    point p1, p2;
    cout << "Enter coordinates for point 1: ";
    p1.input();
    cout << "Enter coordinates for point 2: ";
    p2.input();
    cout << "Point 1: ";
    p1.show();
    cout << "Point 2: ";
    p2.show();
 return 0;
 }