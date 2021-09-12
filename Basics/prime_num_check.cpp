#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,count=0;
    cin>>n;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==1){
        cout<<"Not prime";
    }
    else{
        cout<<"Prime";
    }

    return 0;
}