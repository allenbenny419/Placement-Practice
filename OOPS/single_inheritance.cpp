#include <iostream>

using namespace std;
class Base{
    private:
    int p;
    public:
    float x,y;

    void input(){
        cout<<"Enter 2 Num:"<<endl;
        cin>>x>>y;
    }
};

class child:public Base{
    public:
    float result;
    void mul(){
        result=x*y;
    }
    void disp(){
        cout<<"Result: "<<result;
    }
};


int main(){
    child obj;
    obj.input();
    obj.mul();
    obj.disp();

    return 0;
}

