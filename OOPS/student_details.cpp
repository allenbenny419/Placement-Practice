#include <iostream>

using namespace std;

class student{
    public:
    int id;
    string name;

};

int main(){

    student s1;
    s1.id=1;
    s1.name="John";
    cout<<s1.id<<" "<<s1.name<<endl;

}