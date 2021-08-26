//complex number additon

#include <iostream>

using namespace std;

class complex{
    private:
    float real,img;

    public:
    void read(){
        cout<<"Enter real and imaginary numbers:"<<endl;
        cin>>real>>img;
    }
    void disp(){
        cout<<real<<" + i"<<img<<endl;
    }
    complex operator +(complex &obj){
        complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }

};


int main(){
    complex o1,o2,o3;
    o1.read();
    o2.read();
    o3=o1+o2;
    o3.disp();

    return 0;

}