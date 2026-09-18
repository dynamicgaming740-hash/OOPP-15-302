#include<iostream>

using namespace std;
class point{
    private:
    int x,y;
    public:
    point(int p=0,int q=0): x{p}, y{q} {}
    void add(point p,point q){
        x=q.x+p.x;
        y=p.y+q.y;


    }
    void show() {
           cout << "(" << x << ", " << y << ")" << endl;
       }

    
};


int main(){
    point p(2,3),q(5,6);
     point r.add(p,q);
    r.show();
    p.show();
    q.show();

return 0;
}