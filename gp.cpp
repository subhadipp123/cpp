#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a*=2;
    }
    return 0;
}
// print the gp series 1,2,4,8,16,.... upto n terms 
// here , an= a*r^(n-1)