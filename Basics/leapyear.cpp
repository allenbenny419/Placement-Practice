//leap year
#include<iostream>

using namespace std;

int main(){
    int year;
    cout<<"Enter A Year:"<<endl;
    cin>>year;
    if((year%4==0 && year%100!=0) || (year%400==0)){
        cout<<year<<" is a leap year";
    }
    else{
        cout<<year<<" Not A Leap Year";
    }

    return 0;
}