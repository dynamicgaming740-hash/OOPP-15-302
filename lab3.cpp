#include <iostream>
using namespace std;
class point {
    private:
        int x, y;
    public:
        void input() {
            cin >> x >> y;
        }
        void show() {
            cout << "(" << x << ", " << y << ")" << endl;
        }
};
int main(){
    point p1, p2;
    p1.input();
    p2.input();
    p1.show();
    p2.show();
    return 0;
}