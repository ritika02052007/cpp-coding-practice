// wap to reverse a number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int rev = 0;
    while(n>0){
        int lastDigit = n%10;
        rev = rev*10+lastDigit;
        n/=10;
    }
    cout<<"Reverse Number :"<<rev;
    return 0;
}