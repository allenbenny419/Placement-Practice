#include <iostream>

using namespace std;

class Sample{
    private:
    int a,b;
    public:
    Sample(){
        a=10;  //default
        b=11;
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }
      Sample(int x,int y){
        a=x;
        b=y; //parametized
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }
    Sample(Sample &old){
        a=old.a;
        b=old.b;//copy
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }
    ~Sample(){
        cout<<"Object Killed"<<endl;
    }


};
//main

int main(){
    Sample s1;
    Sample s2(100,44);
    Sample s3(s2);

}