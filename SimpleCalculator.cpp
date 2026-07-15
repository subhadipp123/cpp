#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter the problem :";
    cin>>a>>op>>b;
    switch(op){
        case '+':
        cout<<"Answer is = "<<a+b;
        break;
        case '-':
        cout<<"Answer is = "<<a-b;
        break;
        case '*':
        cout<<"Answer is = "<<a*b;
        break;
        case '/':
        cout<<"Answer is = "<<a/b;
        break;
        default: cout<<"Invalid operator.";
    }
    return 0;
}
// simple calculator