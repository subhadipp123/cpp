#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    int temp=a; 
    a=b;
    b=temp;
    cout<<" now a is "<<a<<" and b is "<<b;
}