#include<iostream>

using namespace std;
class point {
    private:
        int x, y;
    public:                                             
    /*         void input() {    //old version
            cin >> x >> y;
        }//
        void show() {
            cout << "(" << x << ", " << y << ")" << endl;//
        }
        */
       //new which do not take garbage value;
       point() : x(0), y(0) {
        cout << "Default constructor called" << endl;
       } // Default constructor
       point(int p, int q) : x(p), y(q) {
        cout << "Parameterized constructor called" << endl;
       } // Parameterized constructor
       void show() {
           cout << "(" << x << ", " << y << ")" << endl;
       }

};
int main(){
    point p,q(20,50);
    p.show();
    q.show();
    point r=p.add(q);
    r.show();

return 0;
}