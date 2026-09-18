#include<iostream>

using namespace std;

class point {
    private:
        int x, y;
    public:
    point add(point q){
        point r;
        r.x = x + q.x;
        r.y = y + q.y;
        return r;
    }
        point(int x = 0, int y = 0) : x(x), y(y) {}
        /*
        point add(const point &p) const {
            return point(x + p.x, y + p.y);// nameless object
        }
        void show() const {
            cout << "(" << x << ", " << y << ")" << endl;
        }
            */
           void show() {
            cout << "(" << x << ", " << y << ")" << endl;
           }
};

int main() {
    cout<<"in main"<<endl;
    point p(3, 4), q(5, 6);
    point r = p.add(q);
    r.show();
    p.show();
    q.show();
    cout<<"Hello"<<endl;
    return 0;
}
