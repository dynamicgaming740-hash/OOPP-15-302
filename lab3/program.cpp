#include<iostream>
using namespace std;

class Time {
private:
    int hh, mm, ss;

public:
    void input(int h, int m, int s) {
        hh = h;
        mm = m;
        ss = s;
    }

    virtual void show() {
        cout << "Time: " << hh << ":" << mm << ":" << ss << endl;
    }
};

class NewTime : public Time {
public:
    void show() {
        cout << "New Time" << endl;
    }
};

int main() {

    Time t1;
    NewTime t2;

    t1.input(10, 30, 50);
    t2.input(18, 15, 30);

    t1.show();
    t2.show();

    return 0;
}