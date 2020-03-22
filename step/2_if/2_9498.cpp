#include<iostream>
using namespace std;
int main(void){
    int a;
    cin>>a;
    if(100>=a && a>=90) cout<<'A'<<endl;
    else if(90>a && a>=80) cout<<'B'<<endl;
    else if(80>a && a>=70) cout<<'C'<<endl;
    else if(70>a && a>=60) cout<<'D'<<endl;
    else cout<<'F'<<endl;
    return 0;
}