#include <iostream>

using  namespace std;

class circle{
    public:
    int r;

    void getradius();
    void area();
};
//member functions
void circle::getradius(){
        cout<<"Enter Radius:"<<endl;
        cin>>r;
    }
void circle:: area(){
        cout<<"Area = "<<(3.14*r*r);
    }




int main(){
    circle c1;
    c1.getradius();
    c1.area();
    
    return 0;
}