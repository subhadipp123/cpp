#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort012(vector<int>& v){
    int low = 0;
    int mid = 0;
    int high = v.size()-1;
    while (mid<=high){
        if(v[mid]==2){
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = temp;
            high--;
        }
        else if(v[mid]==0){
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            low++;
            mid++;
        }
        else mid++;
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    cout<<"Original elements:";
    display(v);
    
    sort012(v);
    cout<<"Sorted array:";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}

// leetcode question 75 (Sort Color)