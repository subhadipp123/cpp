#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: \n";
cin>>n;
if(n%5==0 && n%3==0)
cout<<"The number is divisible by 5 and 3.";
else
cout<<"The number isn't divisible by 5 and 3.";
return 0;
}
// check if a number is divisible by both 5 and 3 or not 