//inverted number pattern
/*
N=6
123456
12345
1234
123
12
1
*/
#include <iostream>

using namespace std;

int main(){
    int N,i,j;
    cin>>N;
    for(i=N;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}