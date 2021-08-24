/*
N= 5
1 
2 3
4 5 6 
7 8 9 10
11 12 13 14 15 
*/
#include <iostream>

using namespace std;

int main(){
    int  N,i,j,count=1;
    cin>>N;
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}