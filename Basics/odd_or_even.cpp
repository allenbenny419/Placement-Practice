//check whether a number is even or odd

#include <bits/stdc++.h>

using namespace std;

int main(){
    int A;
    cout<<"Enter A Number:"<<endl;
    cin>>A;
    if(A%2==0){
        cout<<A<<" is Even"<<endl;
    }else{
        cout<<A<<" is Odd"<<endl;
    }
    return 0;
}