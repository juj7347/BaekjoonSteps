#include<iostream>
using namespace std;
int main(void){
    int a[5], tot=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
        if(a[i]<40) a[i]=40;
        tot+=a[i];
    }
    cout<<tot/5<<endl;
    return 0;
}