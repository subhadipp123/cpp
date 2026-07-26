#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(67); 
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(78);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(71);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
}
// size means current number of elements occupied in the vector 
// capacity means there can be more spaces than size
// when elements fill up current size then capacity is doubled in vector 