//to see if an element is present in the array

#include <iostream>

using namespace std;

int main(){
    int size,search,i;
    cout<<"Enter Size of Array"<<endl;
    cin>>size;
    int arr[size];
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be searched:"<<endl;
    cin>>search;
    for(i=0;i<size;i++){
        if(arr[i]==search){
            cout<<search<<" is present in the array as "<<i+1<<"th elemrnt";
            break;
        }
    }
    if(i==size){
        cout<<search<<" is not present in array"<<endl;
    }
    return 0;
}