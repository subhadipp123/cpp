#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void reverseVector(vector<int>& v) {
    for (int i = 0, j = v.size() - 1; i < j; i++, j--) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
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

    reverseVector(v);
    cout << "Reversed array: ";
    display(v);

    ReversePart(0, 3, v);
    cout << "Reversed part array: ";
    display(v);

    return 0;
}