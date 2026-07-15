#include<iostream>
using namespace std;
int main(){
    char c,ch;
    cout<<"Enter first character :";
    cin>>c;
    cout<<"Enter second character :";
    cin>>ch;
    int ascii1= (int)c;
    int ascii2= (int)ch;
    cout<<"difference between ASCII value of two characters is :"<<(ascii1-ascii2)<<endl;
    return 0;
}
// WAP to find the difference between ASCII of two characters ,take them as input.