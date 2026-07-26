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
    int count=0;
    int key;
    cout<<"Enter key: ";
    cin>>key;
    for(int i=0; i<n; i++){
        if(arr[i]>key)
        count++;
    }
    cout<<"Number of elements greater than key is: "<<count;
}
// count number of elements in an array that are greater than a user input key