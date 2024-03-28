#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int rows = 1;
    int to_minus = n - 1;

    while(rows != n + 1) {
        int to_print = n - to_minus;
        for(int i = to_print; i >= 1; i--) {
            cout << i << "";
        }
        cout << "\n";
        to_minus = to_minus - 1;
        rows = rows + 1;
    } 
}