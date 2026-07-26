#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int* ptr= arr;
    int* ptr1= &arr[0];
    cout<<ptr<<endl;
    cout<<ptr1<<endl;
    cout<<ptr[0]<<endl;  
    ptr[0]=7;
    cout<<ptr[0]<<endl;  
    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" ";
    }
}