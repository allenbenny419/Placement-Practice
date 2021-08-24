#include <iostream>

using namespace std;

class Rect{
    private:
    int a,b,area,perimeter;
    public:
    void calc();
    void disp();

};
void Rect::calc(){
    cout<<"Enter Length and Width:"<<endl;
    cin>>a>>b;
    area=a*b;
    perimeter=2*(a+b);

}
void Rect::disp(){
    cout<<"Perimter: "<<perimeter<<endl;
    cout<<"Area: "<<area<<endl;
}

int main(){
    Rect r1;
    r1.calc();
    r1.disp();

    return 0;
}