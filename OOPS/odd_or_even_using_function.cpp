#include <iostream>

using  namespace std;

int getnum(){
    int p;
    cout<<"Enter a Num:"<<endl;
    cin>>p;
    return p;
}
void disp(int c){
    if(c%2==0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }

}

int main(){
    int x;
    x=getnum();
    disp(x);
    return 0;
}
