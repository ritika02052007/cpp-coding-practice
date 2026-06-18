#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int rev =0;
    int pali = n;
    while(n>0){
        int lastDigit = n%10;
        rev = rev*10+lastDigit;
        n/=10;
    }
    if(pali == rev){
        cout<<"it is a palindrome number";
    }
    else{
        cout<<"it is not a palindrome number";
    }
    return 0;
}