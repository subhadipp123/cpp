#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(67); 
    v.push_back(78);
    v.push_back(71);
    v.push_back(7);
    v.push_back(67); 
    v.push_back(67);
    v.push_back(91);
    int x=67;
    int idx=-1;
    for(int i=v.size(); i>=0; i--){
        if(v[i]==x){
        idx=i;
        break;
        }
    }
    cout<<idx;
}