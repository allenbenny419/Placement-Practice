#include <bits/stdc++.h>

using namespace std;

class circle{
    private:
    int r;
    circle(){
        r=4;
    }
    friend void area();

};

void area(){

    circle c1;
    cout<<(3.14*c1.r*c1.r);
}




int main(){

    area();
    return 0;
} 
