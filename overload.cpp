#include<iostream>

using namespace std;
class comp{
    private:
    int real,img;
    public:
    comp(int r=0,int i=0): real{r}, img{i} {}
    void show() {
           cout << real << " +" << img << "i" << endl;
       }
      // comp operator+(comp c){
        //return comp(real+c.real,img+c.img);
        // return comp(this->real+c.real,this->imgl+c.img);//second method using this
        /*int r=this->real+c.real;//3rd method 
        int i=this->img+c.img;
        comp t(r,i);
        return t;*/
       //}
       friend comp operator+(comp c,int x);
       friend comp operator+(int c, comp d);
       
};
    comp operator+(comp c,int x){
        return comp(c.real+x,c.img+x);
    }
    comp operator+(int c,comp d){
        return comp(c+d.real,c+d.img);
    }
int main(){
    comp c1{5,10},c2{10,20},c3;
     //c3=c1+c2;
     //c3=c1+5;
     c3=5+c2;
    c1.show();
    c2.show();
    c3.show();

return 0;
}

