#include <iostream>
using namespace std;

int main() {
    int n;
    int product = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers.";
    } else {
        for (int i = 1; i <= n; i++) {
            product *= i;
        }

        cout << "Factorial of " << n << " = " << product;
    }

    return 0;
}
// find Factorial of a number