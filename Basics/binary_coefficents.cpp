#include <bits/stdc++.h>
int factorial(int num){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact=fact*i;
    }
    return fact;

}
using namespace std;

int main(){
    int n,r;
    cin>>n>>r;
    int ans=factorial(n)/(factorial(n-r)*factorial(r));
    cout<<ans;
    return 0;

}