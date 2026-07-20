#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int LastDigit=0;
    int Sum=0;
    while(n>0){
        LastDigit=n%10;
        Sum+=LastDigit;
        n/=10;
    }
    cout<<"Sum= "<<Sum;
}