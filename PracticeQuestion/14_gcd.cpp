// wap to find the gcd

#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter the first number :";
    cin>>n1;
    cout<<"enter the second number :";
    cin>>n2;
    while(n1 != n2){
        if(n1 > n2)
          n1 -= n2;
        else 
          n2-= n1;
    }

    cout<<"HCF ="<<n1;
    return 0;
}