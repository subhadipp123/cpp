#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);// we should always use push_back to enter an element in vector 
    v.push_back(67); // v[1]= 67 is wrong
    v.push_back(2);

    cout<<v[0]<<endl;
    for(int i=0;i<3; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v[0]=98;
    for(int i=0;i<3; i++){
        cout<<v[i]<<" ";
    }
}