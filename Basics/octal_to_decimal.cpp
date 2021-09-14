#include <iostream>

using namespace std;

int convert(int b){
    int sum=0,rem=1,x=1;
    while(b>0){
        rem=b%10;
        sum=sum+rem*x;
        x*=8;
        b=b/10;
    }
    cout<<sum;

}


int main(){
    int bi;
    cin>>bi;
    convert(bi);

    return 0;
}