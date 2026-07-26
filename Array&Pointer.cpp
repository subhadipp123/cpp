#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int* ptr= arr;
    int* ptr1= &arr[0];
    cout<<ptr<<endl;
    cout<<ptr1;    
}