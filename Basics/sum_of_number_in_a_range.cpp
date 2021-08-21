 //Sum of Natural Numbers in a given range
#include<bits/stdc++.h>

using namespace std;

int main(){
    int ll,ul;
    cout<<"Enter Lower Limit And Upper Limit:"<<endl;
    cin>>ll>>ul;
    int sum=0;

    for(int i=ll;i<=ul;i++){
        sum=sum+i;
    }
    cout<<"Sum of Numbers from "<<ll<<" to "<<ul<<" = "<<sum;
    return 0;

}