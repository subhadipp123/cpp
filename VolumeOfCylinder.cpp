#include<iostream>
using namespace std;
int main(){
    float r,h;
    float pi=3.1415;
    cout<<"Enter radius of cylinder :";
    cin>>r;
    cout<<"Enter height of cylinder :";
    cin>>h;
    float volume;
    volume= pi*r*r*h;
    cout<<"Volume of cylinder is ="<<volume;
    return 0;  
}
// find the volume of cylinder and take radius and height from keyboard