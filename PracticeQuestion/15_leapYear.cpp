#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year";
    cin>>year;

    if(year %400 == 0){
        cout<<"it is a leap year"<<endl;
    }  else if(year % 100 == 0){
        cout<<"it is not a leap year"<<endl;
    } else if(year % 4 == 0){
        cout<<"it is leap year"<<endl;
    } else {
        cout<<"it is not a leap year"<<endl;
    }
    return 0;
}