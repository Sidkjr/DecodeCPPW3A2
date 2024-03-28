#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    n = 64 + n;
    int i = 65;
    while(i <= n) {
        for (int j = 65; j <= i; j++) {
            cout << (char)j << " ";
        }
        cout << "\n";
        i = i + 1;
    }
    cout << "\n";
}