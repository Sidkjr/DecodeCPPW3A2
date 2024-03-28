#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the value for n: ";
    cin >> n;


        for (int i = 1; i <= n + 1; i++) {
            for (int j = 1; j < i; j++) {
                cout << "*" << "";
            }
            cout << "\n";
        }

        for (int i = n; i > 1; i--) {
            for (int j = n; j > 1; j--) {
                cout << "*" << "";
            }
            cout << "\n";
            n = n - 1;
        }

}