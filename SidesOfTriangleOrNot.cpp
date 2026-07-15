#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter first side of triangle :";
    cin>>a;
    cout<<"enter second side of triangle :";
    cin>>b;
    cout<<"enter third side of triangle :";
    cin>>c;
    if(((a+b>c) && (b+c>a)) &&(a+c>b)){
        cout<<"valid 3 sides of triangle";
    }else{
        cout<<"invalid sides of triangle";
    }
    return 0;
}
// check if the triangle is valid or not if 3 sides are given