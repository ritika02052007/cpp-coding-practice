// wap to check whether a character is vowel or consonant

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character :";
    cin>>ch;
    if(ch == 'a' || ch =='e' || ch=='i' || ch == 'o' || ch=='u' ||
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'o' || ch == 'U'){
        cout<<"it is vowel";
    }
    else {
        cout<<"it is a consonant";
    }
    return 0;
}