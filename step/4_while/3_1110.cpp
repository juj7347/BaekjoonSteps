#include<iostream>
using namespace std;
int main(void){
    int n, a, b, cnt=0;
    cin>>n;
    a=n;
    while(1){
        b=a;
        a=(a%10)*10 + ((a/10)+(a%10))%10;
        cnt++;
        if(n==a) {
            cout<<cnt<<endl;
            return 0;
        };
    }
    return 0;
}