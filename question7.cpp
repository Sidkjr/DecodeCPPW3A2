#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int rows = 1;
    int spaces_at_start = n;
    while(rows != n + 1) {
        for(int i = 1; i < spaces_at_start; i++) {
            cout << " ";
        }
        spaces_at_start = spaces_at_start - 1;
        for(int j = 1; j <= n; j++) {
            cout << "*" << "";
        }
        cout << "\n";
        rows = rows + 1;
    }
}