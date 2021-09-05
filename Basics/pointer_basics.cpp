#include <iostream>

using namespace std;

int main(){
    int *ptr,a=10;
    ptr=&a;
    *ptr=*ptr+10;

    cout<<*ptr;

    return 0;
}