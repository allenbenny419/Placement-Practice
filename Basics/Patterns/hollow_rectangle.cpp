//hollow rectangle pattern
/* 
*****
*   * 5x5
*   *
*   *
*****
*/

#include <iostream>

using  namespace std;

int main(){
    int row,column;
    cin>>row>>column;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
        if(i==1 || i==row){
            cout<<"*";
            continue;
        }
        else if(j==1 || j==column){
            cout<<"*";
        }
        else if(j!=1 || j!=column){
            cout<<" ";
        }
        }
        
        cout<<endl;
        }
        return 0;
    }
    