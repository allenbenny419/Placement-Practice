#include <bits/stdc++.h>

using namespace std;

void convert(string b){
    int sum=0,x=1;
    int y=b.size();
    for(int i=y-1;i>=0;i--){
        if(b[i]>='0' && b[i]<='9'){
            sum=sum+(b[i]-'0')*x;
        }
        else if(b[i]>='A' && b[i]<='F'){
            sum=sum+(b[i]-'A'+10)*x;
        }

        x*=16;

    }
    cout<<sum;
}

int main(){
    string bi;
    cin>>bi;
    convert(bi);

    return 0;
}