#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a+=2;
    }
    return 0;
}
// print the ap series 1,3,5,7,9... upto n terms
// OR , here a=1, d=2
// we know , sum an= a+(n-1)d (this will be condition)