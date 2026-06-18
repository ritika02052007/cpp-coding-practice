#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int i;

    bool isPrime = true;
    if(n<=1){
        isPrime = false;
    }  else{
        for(int i = 2; i*i <= n; i++){
            if(n%i == 0){
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime){
        cout<<n<<"is prime";
    } else{
        cout<<n<<" is not prime";
    }
    
    return 0;
}