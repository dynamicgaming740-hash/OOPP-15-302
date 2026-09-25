#include<iostream>
using namespace std;

class point {
private:
    int x, y;

public:
    void input() {
        cin >> x >> y;
    }

    virtual void show() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

class point2 : public point {
public:
    void show() {
        cout << "This is point 2" << endl;
    }
};

int main() {
    point p1;
    point2 p2;

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