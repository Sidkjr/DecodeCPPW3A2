#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int rows = 1;
    int col = 1;
    while(rows != n + 1) {
        for(int i = 1; i <= col; i++) {
            cout << i << " ";
        }
        col = col + 1;
        cout << "\n";
        rows = rows + 1;
    }
}