#include<iostream>
using namespace std;
class calculator{
    public:
    float a;
    float b;
    void add(){
        cout<<a+b;
    }
    void subtract(){
        cout<<a-b;
    }
    void multiply(){
        cout<<a*b;
    }
    void divide(){
        cout<<a/b;
    }
};
int main(){
    calculator calsi;
    calsi.a=12;
    calsi.b=67;
    calsi.add();
    cout<<endl;
    calsi.subtract();
    cout<<endl;
    calsi.multiply();
    cout<<endl;
    calsi.divide();
}