#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void movePositiveNegative(vector<int>& v) {
    vector<int> result;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 0) {
            result.push_back(v[i]);
        }
    }

    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= 0) {
            result.push_back(v[i]);
        }
    }

    v = result;
}

int main() {
    vector<int> v = {-7, 9, 12, -64, -8, 81, 2};

    cout << "Original elements: ";
    display(v);

    movePositiveNegative(v);

    cout << "Negative first, positive afterward: ";
    display(v);

    return 0;
}
// WAP to move all negative numbers at the beginning and all positive numbers after to end 