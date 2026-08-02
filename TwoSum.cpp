#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target :";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    cout<<"Enter elements :";
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]+v[j]==x){
            cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}
// find the doublet in the array whose sum is equal to the given value x