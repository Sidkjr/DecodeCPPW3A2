#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n + 1; ++i) {
        if (i % 2 == 1) { 

            for (int j = 1; j <= i; ++j) {
                cout << j << " ";
            }
        } else {

            for (int j = 0; j < i; ++j) {
                char ch = 'A' + j;
                cout << ch << " ";
            }
        }
        cout << "\n";
    }
}