#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int>& v){
    int noZero = 0;
    int noOne = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==0) noZero++;
        else noOne++;
    }
    for(int i=0; i<v.size(); i++){
        if(i<noZero) v[i]=0;
        else v[i]=1;
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    cout<<"Original elements:";
    display(v);
    
    sort01(v);
    cout<<"Sorted array:";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}

// sort(v.begin(), v.end()); is the easiest method 
// sort all zeros and ones in an array 