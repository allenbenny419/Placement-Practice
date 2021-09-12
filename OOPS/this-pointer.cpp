#include <iostream>

using namespace std;

class smaple{
    private:
    int x;
    public:
    smaple(){
        cout<<this<<endl;// prints the address of the current obj;
    }
    void gif(int x){
        this->x=x; //this fun is used differentiate btw local variables and data members
        cout<<this->x;
    }
};

int main(){
    smaple t;
    t.gif(20);

    return 0;


}
