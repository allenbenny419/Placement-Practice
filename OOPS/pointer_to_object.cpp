#include <iostream>

using namespace std;


class trial{
    private:
    int x;
    int y;
    public:
    trial(){
        x=10;
        y=20;
    }

    void print(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){

    trial x;
    trial *p;
    p=&x;
    p->print();
    (*p).print();

}