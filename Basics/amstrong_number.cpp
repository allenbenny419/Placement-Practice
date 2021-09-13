#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x=n;
    int sum=0;
    while(n>0){
        int last=n%10;
        sum=sum+(last*last*last);
        n=n/10;
    }
    if(sum==x){
        cout<<"Amstrong Number";
    }
    else{
        cout<<"Not Amstrong Number";
    }
    return 0;
}