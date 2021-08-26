#include <iostream>
#include <string.h>

using namespace std;

class Strings{
    private:
    char s1[30],s2[30];

    public:
    Strings(char str[25],char str1[25]){
        strcpy(s1,str);
        strcpy(s2,str1);
    }
    void operator +(){
        cout<<strcat(s1,s2);
    }

};


int main(){
    char st1[25]="HELLO";
    char st2[25]=" WORLD";

    Strings ob1(st1,st2);
    +ob1;
}