#include <iostream>

using namespace std;

class B1{
    public:
    float x;

    void inputx(){
        cout<<"Enter X value:"<<endl;
        cin>>x;

    }
};

class B2{
    public:
    float y;

    void inputy(){
        cout<<"Enter y value:"<<endl;
        cin>>y;
    }
};
class D:public B1,public B2{
    public:
    float z;

    void result(){
        z=x*x + y*y;
        cout<<"x^2 + y^2 = "<<z<<endl;
    }
};

int main(){
    D obj;

    obj.inputx();
    obj.inputy();
    obj.result();
    return 0;
}