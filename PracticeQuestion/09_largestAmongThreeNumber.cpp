// wap to find the largest among three number

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the first number :";
    cin>>a;
    int b;
    cout<<"enter the second number :";
    cin>>b;
    int c;
    cout<<"enter the third number :";
    cin>>c;
    if(a>b && a>c){
        cout<<"The greatest number is :"<<a;
    } else if(b>c){
        cout<<"The greatest number is :"<<b;
    } else {
        cout<<"The greatest number is :"<<c;
    }
    return 0;
}