#include<iostream>
using namespace std;
void display(int arr[], int size){
    for(int i=0;i<size; i++){
    cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void change(int a[], int size){
    a[0]=67;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array is: "<<size;
    display(arr, size);
    change(arr, size);
    display(arr, size);
}