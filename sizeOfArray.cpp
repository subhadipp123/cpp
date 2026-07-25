#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,5,67,4,5,6,8,9,2,3,4,65,8,9,11,22,44,56,9,0,32,6,1,17,45,71};
    int n= sizeof(arr)/(sizeof(arr[0]));
    cout<<n;
}