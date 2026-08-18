#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void ReversePart(int i, int j, vector<int>& v) {
    for (; i < j; i++, j--) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

int main() {
    vector<int> v = {1, 8, 2, 7, 14, 9};

    cout << "Original elements: ";
    display(v);
    int k;
    cout<< "Value of k: ";
    cin>>k;
    int n= v.size();
    ReversePart(0, n-k-1, v);
    ReversePart(n-k, n-1, v);
    ReversePart(0, n-1, v);
    display(v);

    return 0;
}