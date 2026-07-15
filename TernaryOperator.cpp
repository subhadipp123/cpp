#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    (n%2==0)? cout<<"Even": cout<<"Odd";
    return 0;
// check if a number is even or odd using conditional operator or ternary operator