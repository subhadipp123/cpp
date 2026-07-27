#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0; i<5; i++){
        cout<<v[i]<<" "; // default values 0 will be assigned as we didnt initialized 
    }    
    cout<<endl;
    vector<int> vc(10,25);// initial size=10, each element value is 25
    cout<<vc[2]<<endl;
    for(int i=0; i<10; i++){
        cout<<vc[i]<<" "; 
    } 
}