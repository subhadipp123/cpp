#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter marks :";
    cin>>n;
    if(n>=90){
        cout<<"Grade: O";
    }else if(n>=80){
        cout<<"Grade: E";
    }else if(n>=70){
        cout<<"Grade: A";
    }else if(n>=60){
        cout<<"Grade: B";
    }else if(n>=50){
        cout<<"Grade: C";
    }else if(n>=40){
        cout<<"Grade: D";
    }else{
        cout<<"Grade: F";
    }
    return 0;
}
// take marks as input from keyboard and assign grades according to B.Tech evaluation scheme