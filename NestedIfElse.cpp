#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
if(n%5==0 || n%3==0){
    if(n%15 !=0){
        cout<<"The number is divisible by 5 or 3 but not divisible by 15.";
    }
else{
cout<<"This is invalid and not allowed.";
}
}else{
    cout<<"The number is neither divisible by 5 nor by 3.";
}
return 0;
}
// check if a number is divisible by 5 or 3 but the number should not divisible by 15 

// another logic

// if((n%5==0 || n%3==0) && n%15 !=0){
// cout<<"The number is divisible by 5 or 3 but not divisible by 15.";
// }else{
// cout<<"This is invalid and not allowed."
// }