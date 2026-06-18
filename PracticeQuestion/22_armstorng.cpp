// wap to check the number if it is armstorng or not

#include<iostream>
using namespace std;
int main(){
    int n,lastDigit = 0,arm =0;
    cout<<"enter the number :";
    cin>>n;
    int armstrong = n;
    while(n>0){
      lastDigit = n%10;
      arm = (lastDigit*lastDigit*lastDigit)+arm;
      n/=10; 
    }
    if(arm == armstrong){
        cout<<"it is a armstrong number";
    }  else {
        cout<<"it is not a armstorng number";
    }
    return 0;
}