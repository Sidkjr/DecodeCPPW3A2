#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    while(n != 1) {
        for(int i = 1; i <= n; i ++) {
            cout << i << " ";
        }
        cout << "\n";
        n = n - 1;
    }

    cout << 1 << "\n";

}