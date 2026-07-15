#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    cout<<"Enter third number :";
    cin>>c;
    if(a>b && a>c)
    cout<<a<<endl<<"is greatest.";
    else if(b>a && b>c)
    cout<<b<<endl<<"is greatest.";
    else
    cout<<c<<endl<<"is greatest.";
    return 0;
}
// find the greatest number among 3