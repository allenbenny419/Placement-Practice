  /* 
  N=5
    *
   **
  ***
 ****
*****
    */
   
#include <iostream>

using namespace std;

int main(){
    int N,i,j;
    cin>>N;
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(j<=N-i){
                cout<<" ";
                continue;
            }
            cout<<"*";


        }
        cout<<endl;
    }






   /* for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            cout<<"*";      //normmal
        }
        cout<<endl;
    }*/


    return 0;

}