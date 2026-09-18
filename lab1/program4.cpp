//WAP to create a class for time having hh,mm and ss.create input method that takes value as parameter and set the value to corresponding variable.
//create another method called show that will print the value of hh,mm,ss.create any two object in main and call input and show method respectively.
#include<iostream>

using namespace std;
class Time{
    private:
        int hh, mm, ss;
    public:
        void input(int h, int m, int s){
            hh = h;
            mm = m;
            ss = s;
        }
        void show(){
            cout << "Time: " << hh << ":" << mm << ":" << ss << endl;
        }
};


int main(){

    Time t1, t2;
    t1.input(10, 30, 50);
    t2.input(14, 15, 30);
    t1.show();
    t2.show();
    return 0;
}