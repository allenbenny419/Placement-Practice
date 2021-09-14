#include <bits/stdc++.h>

using namespace std;

int fact(int num){
    int facto=1;
    for(int k=2;k<=num;k++){
        facto=facto*k;
    }
    return facto;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int x=fact(i)/(fact(j)*fact(i-j));
            cout<<x<<" ";
        }
        cout<<endl;
    }
}