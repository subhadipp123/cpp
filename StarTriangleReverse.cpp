#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
     for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){ // no of stars = n+1-i (i= row number)
            cout<<"*";
        }
        cout<<endl;
    }
}
