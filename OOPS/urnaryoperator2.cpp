#include <iostream>

using namespace std;


class sample{
    private:
    int x,y;
    public:
    void input(){
        cout<<"enter 2 num:";
        cin>>x>>y;
    }
    void operator ++(){
        x=x+5;
        y=y+5;
    }
    void print(){
        cout<<x<<"  "<<y<<endl;
    }
};

int main(){
    sample o1;
    o1.input();
    o1.print();
    ++o1;
    o1.print();

    return 0;
}