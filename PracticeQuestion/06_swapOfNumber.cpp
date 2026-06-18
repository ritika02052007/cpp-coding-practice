// wap to swap of two number 

#include<iostream>
using namespace std;
int main(){
    int a =4;
    int b = 6;
    int temp;
    cout<<"Before swap->"<<"a :"<<a<<" ,b :"<<b<<endl;
    temp =a;
    a = b;
    b= temp;

    cout<<"After swap->"<<" a :"<<a<<" ,b :"<<b<<endl;
    return 0;
}