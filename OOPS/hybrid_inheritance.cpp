#include <iostream>

using namespace std;
class student{
    protected:
    int roll;
    public:
    void rollin(){
        cout<<"Enter Roll Number:"<<endl;
        cin>>roll;
    }
};

class test:public student{
    protected:
    int x1,x2;
    public:
    void marks(){
        cout<<"Enter marks of paper 1:"<<endl;
        cin>>x1;
        cout<<"Enter marks of paper 2:"<<endl;
        cin>>x2;
    }
};
class sports{
    protected:
    int spmark;
    public:
    void insp(){
        cout<<"Enter marks of sports:"<<endl;
        cin>>spmark;
    }
};
class result:public sports,public test{
    public:
    void disp(){
        cout<<"Enter Roll : "<<roll<<endl;
        cout<<"Total Marks:"<<spmark+x1+x2<<endl;
    }
};

int main(){

    result obj;
    obj.rollin();
    obj.insp();
    obj.marks();
    obj.disp();

    return 0;
}