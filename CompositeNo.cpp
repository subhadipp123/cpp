#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
        cout<<"This is a composite number."<<endl;
        break;
        }
        else
        cout<<"This is not a composite number."<<endl;
        break;
    }
}
// check if a number is composite or not