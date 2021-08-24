#include<iostream>//N=20
using namespace std;
int main()
{
        int i, j, count=0,s=0;
        cout<<"\n Prime Numbers :\n";
        for(i=2; i<=100; i++)
        {
                count=0;
                for(j=2; j<i; j++)
                {
                        if(i%j==0)
                        {
                                count++;
                                break;
                        }
                }
                if(count==0)
                {
                        cout<<i<<"\n";
                        s++;
                }
                if(s==20){
                    break;
                }
        }
        return 0;
}
