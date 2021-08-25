#include <iostream>

using namespace std;

class sample{
    private:
    int x,y;
    public:
    void read(){
        cout<<"Enter 2 numbers:"<<endl;
        cin>>x>>y;
    }
    void disp(){
        cout<<"x= "<<x<<endl;
        cout<<"y= "<<y<<endl;
        
    }
    void operator --(){
        x=-x;
        y=-y;
    }
};

int main(){
    sample o1;
    o1.read();
    o1.disp();
    --o1;
    o1.disp();

    return 0;
}