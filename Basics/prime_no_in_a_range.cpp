//prime numbers in a range
#include <iostream>

using namespace std;

int main(){
    int a,b,i,j;
    cin>>a>>b;
    for(i=a;i<=b;i++){
         for(j=2;j<i;j++){
             if(i%j==0){
                 break;//means there is a factor
             }

         }
         if(j==i){//if no factor btw 1 and i
             cout<<i<<endl;
         }
    }
    return 0;
}