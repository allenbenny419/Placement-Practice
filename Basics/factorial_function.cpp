#include <iostream>

using namespace std;

void facto(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    cout<<factorial;

}
int main(){
    int n;
    cin>>n;
    facto(n);
    return 0;
}