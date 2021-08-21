//Program to Check whether a number is Positive or Negative

#include <iostream>

using namespace std;

int main(){
    int A;
    cout<<"Enter A No:"<<endl;
    cin>>A;
    if(A<0){
        cout<<A<<" is a Negative Number";
    }else if(A>0){
        cout<<A<<" is a Positve Number";
    }else{
        cout<<A<<" is Zero";
    }
    return 0;
}