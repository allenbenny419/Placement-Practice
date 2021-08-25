#include<iostream>

using namespace std;

class circle{
    private:
    float r,are,cir;

    public:
    void read();
    void area();
    void circum();
    void disp();

};
void circle::read(){
    cout<<"Enter Radius:"<<endl;
    cin>>r;
}
void circle::area(){
    are=3.14*r*r;
}
void circle::circum(){
    cir=3.14*r*2;
}
void circle::disp(){
    cout<<"Area: "<<are<<endl;
    cout<<"Circmfrence: "<<cir<<endl;
}

int main(){
    circle c1;
    c1.read();
    c1.area();
    c1.circum();
    c1.disp();   

    return 0;
}