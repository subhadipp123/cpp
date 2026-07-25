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
    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;
    // check mark
    bool flag= false; // false means element not present 
    for(int i=0; i<=n-1; i++){
        if(key==arr[i])
        flag= true;
    }
    if(flag== true) cout<<"Element found.";
    else cout<<"Element not found.";
}