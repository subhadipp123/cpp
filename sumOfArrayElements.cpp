#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<=n-1; i++){
        sum+=arr[i];
    }
    cout<<"Sum of all array elements is: "<<sum;
}