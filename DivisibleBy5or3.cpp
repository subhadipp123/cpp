#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: \n";
cin>>n;
if(n%5==0 || n%3==0)
cout<<"The number is divisible by 5 or 3.";
else
cout<<"The number is neither divisible by 5 nor by 3.";
return 0;
}
// check if a number is divisible by 5 or 3 or not 