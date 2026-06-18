// wap to find the sum of all natural number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int sum=0;
    for(int i =1; i<=n;i++){
        sum+=i;
    }
    cout<<"Sum of all natural number is :"<<sum;
    return 0;
}