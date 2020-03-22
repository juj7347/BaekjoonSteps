#include<iostream>
using namespace std;
int main(void){
    int a[5], x, y;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    if(a[0]<=a[1]){
        if(a[0]<=a[2]) x=a[0];
        else x=a[2];
    } else{
        if(a[1]<=a[2]) x=a[1];
        else x=a[2];
    }
    if(a[3]<=a[4]) y=a[3];
    else y=a[4];
    cout<<x+y-50<<endl;
    return 0;
}