#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of lines :";
    cin>>n;
    int nst = 1; // number of stars at first row is 1
    int nsp = n-1; // number of space at first row is n-1
     for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=nsp; j++){
            cout<<" "; // spaces
        }
        if(i<=n-1) nsp--;
        else nsp++;
        for(int k=1; k<=nst;k++){
            cout<<"*"; //stars
        }
        if(i<=n-1) nst+=2;
        else nst-=2;
        cout<<endl;
    }
}