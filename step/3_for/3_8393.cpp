#include<iostream>
using namespace std;
int main(void){
    int n, k=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        k+=i;
    }
    cout<<k<<endl;
    return 0;
}