#include<iostream>
using namespace std;
int main(void){
    int a[3], x;
    cin>>a[0]>>a[1]>>a[2];
    if(a[1]>a[2]){
        x=a[1];
        a[1]=a[2];
        a[2]=x;
    }
    if(a[0]>a[1]){
        x=a[0];
        a[0]=a[1];
        a[1]=x;
    }
    if(a[1]>a[2]){
        x=a[1];
        a[1]=a[2];
        a[2]=x;
    }
    cout<<a[1]<<endl;
    return 0;
}