/*
when virtual is not used
grandparent
parent1
grandparent
parent2
child

when used:
grandparent
parent1
parent2
child

*/
#include <iostream>

using namespace std;

class grandparent{
    public:
    grandparent(){
        cout<<"grandparent"<<endl;
    }

};

class parent1:public virtual grandparent{
    public:
    parent1(){
        cout<<"parent1"<<endl;
    }

};
class parent2:public virtual grandparent{
    public:
    parent2(){
        cout<<"parent2"<<endl;
    }
};
class child:public parent1,public parent2{
    public:
    child(){
        cout<<"child"<<endl;
    }
};
int main(){
    child h;

    return 0;
}