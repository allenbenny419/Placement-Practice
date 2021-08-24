#include <iostream>

using namespace std;

int main(){
    int N,i,j;
    cin>>N;

    for(i=1;i<N;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*N - 2*i;
         for(j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(i=N;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*N - 2*i;
         for(j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;

}