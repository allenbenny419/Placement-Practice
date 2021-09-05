#include <iostream>

using namespace std;

class base{
    public:
    base(){
        cout<<"Base Class Constructor"<<endl;
    }
};

class derived:public base{
    public:
    derived(){
        cout<<"Derived Class Constructor"<<endl;
    }
};
int main(){
    derived obj;


    return 0;
}