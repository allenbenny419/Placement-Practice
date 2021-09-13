#include <iostream>

using namespace std;
void fib(int num){
    int k=0;
    int g=1;
    cout<<k<<endl;
    cout<<g<<endl;
    int sum=0;
    for(int i=3;i<=5;i++){
        sum=k+g;
        k=g;
        g=sum;
        cout<<sum<<endl;
        
    }
}
int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}