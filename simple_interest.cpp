#include<iostream>
using namespace std;
int main(){
int p,r,t,f;
cout<<"Enter principle:";
cin>>p;
cout<<"Enter rate of interest:";
cin>>r;
cout<<"Enter time:";
cin>>t;
f = p + (p*r*t)/100;
cout<<"Final amount is:"<<f;
return 0;
}
// simple interest program