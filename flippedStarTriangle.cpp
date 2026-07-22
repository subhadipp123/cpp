#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
     for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){ 
            cout<<" "; //spaces
         }
            for(int k=1; k<=i; k++){
            cout<<"*"; //stars
            }
        cout<<endl;
    }
}