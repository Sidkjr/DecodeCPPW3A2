#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int rows = 1;
    int spaces_to_add_front = n - 1;
    int chars = 0;

    while(rows != n + 1) {
        for(int i = 1; i <= spaces_to_add_front; i++) {
            cout << " ";
        }
        spaces_to_add_front = spaces_to_add_front - 1;
        for(int j = 0; j <= chars; j++) {
            char ch = 'A' + j;
            cout << ch << "";
        }
        cout << "\n";
        chars = chars + 1;
        rows = rows + 1;
    }
}