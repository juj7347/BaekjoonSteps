#include<iostream>
using namespace std;
int main(void){
    int h, m;
    cin>>h>>m;
    if(m>=45) cout<<h<<' '<<m-45<<endl;
    else if(h==0) cout<<23<<' '<<60+m-45<<endl;
    else cout<<h-1<<' '<<60+m-45<<endl;
    return 0;
}