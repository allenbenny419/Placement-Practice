/*
N=6
1
01
101
0101
10101
010101

*/
#include <iostream>

using namespace std;

int main(){
    int N,i,j;
    cin>>N;
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            if(i%2!=0){
                if(j%2!=0){
                    cout<<1;
                }else{
                    cout<<0;
                }
            }else{
                if(j%2!=0){
                    cout<<0;
                }else{
                    cout<<1;
                }

            }
            
        }
        cout<<endl;
    }
    return 0;
}