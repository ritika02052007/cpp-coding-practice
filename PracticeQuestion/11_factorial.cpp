// wap to find the factorial of the given number 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the numebr :";
    cin>>n;
    int fact =1;
    for(int i =1; i<=n;i++){
        fact*=i;
    }
    cout<<fact;
    return 0;
}