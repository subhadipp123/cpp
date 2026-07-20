#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int LastDigit=0;
    int reverse=0;
    while(n>0){
        reverse*=10;
        LastDigit=n%10;
        reverse+=LastDigit;
        n/=10;
    }
    cout<<"Reverse= "<<reverse;
}
// reverse a number 