#include <iostream>

using namespace std;

class A{
    public:
    float x;
    void input(){
        cout<<"Enter a num:"<<endl;
        cin>>x;
            }
};
class B: public A{

    public:
     void square(){
        cout<<"Sqaure of Num is:"<<endl;
        cout<<x*x<<endl;
            }
};
class C: public B{

    public:
     void cube(){
        cout<<"Cube of Num is:"<<endl;
        cout<<x*x*x;
            }
};
int main(){

    C obj;
    obj.input();
    obj.square();
    obj.cube();
    
    return 0;
}