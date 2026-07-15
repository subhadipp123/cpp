#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter selling price:";
    cin>>sp;
    cout<<"Enter cost price:";
    cin>>cp;
    if(sp>cp)
    cout<<"Profit="<<sp-cp;
    else if(cp>sp)
    cout<<"Loss="<<cp-sp;
    else
    cout<<"No profit, no loss!";
    return 0;
}
// determine profit or loss