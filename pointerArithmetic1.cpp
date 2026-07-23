#include<iostream>
using namespace std;
int main(){
    int x=5;
    int* ptr= &x;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr;
}
// gives garbage values in this case 