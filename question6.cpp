#include <iostream>
using namespace std;

int main() {
    int m;
    int n;
    cout << "Enter the value for m: ";
    cin >> m;
    cout << "\nEnter the value for n: ";
    cin >> n;
    int rows = 1;
    int columns = n;

    while(rows != m + 1) {
            if(rows == 1 || rows == m) {
                for(int j = 1; j <= n; j++) {
                    cout << "*" << "";
                }
                cout << "\n";
            }
            else {
                cout << "*" << "";
                for(int k = 2; k < n; k++) {
                    cout << " ";
                }
                cout << "*" << "\n";
            }
        rows = rows + 1;
    }
}