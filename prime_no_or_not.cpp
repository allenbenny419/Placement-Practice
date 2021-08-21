//prime number

#include <iostream>
using namespace std;

int main(){
    int x;
    int count=0;
    cin>>x;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            count++;
    }
        if(count>3){
            break;
        }
}
    if(count<=2){
        cout<<x<<" is prime";
    }else{
        cout<<x<<" is not prime";
    }
    return 0;
}