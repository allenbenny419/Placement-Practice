#include <iostream>

using namespace std;

class numbers{
    private:
    int x,y;
    public:
    void read(){
        cin>>x>>y;
    }
    void disp(){
        cout<<x<<"  "<<y;
    }
    friend numbers operator +(numbers &obj1,numbers &obj2 ){
        numbers temp;
        temp.x=obj1.x+obj2.x;
        temp.y=obj1.y+obj2.y;
        return temp;
    }

};

int main(){
    numbers o1,o2,o3;
    o1.read();
    o2.read();
    o3=o1+o2;
    o3.disp();


    return 0;
}