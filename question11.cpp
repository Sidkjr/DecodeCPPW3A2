#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int rows_before_n = 1;
    int rows_after_n;
    int spaces_before_cond = n - 1;
    int spaces_after_cond = 1;
    int star_before_cond = 1;
    int star_after_cond = n - 1;
    int limit;



    while(rows_before_n != n + 1) {
        for(int i = 1; i <= spaces_before_cond; i++) {
            cout << " ";
        }
        for(int j = 1; j <= star_before_cond; j++) {
            cout << "*";
        }
        cout << "\n";
        spaces_before_cond = spaces_before_cond - 1;
        rows_before_n = rows_before_n + 1;
        star_before_cond = star_before_cond + 1;
    }

    if(rows_before_n - 1 % 2 == 0) {
        limit = n - 1;
    }
    else {
        limit = n;
    }

    while(rows_after_n < n) {
        for(int i = 1; i <= spaces_after_cond; i++) {
            cout << " ";
        }
        for(int j = 1; j <= star_after_cond; j++) {
            cout << "*";
        }
        cout << "\n";
        spaces_after_cond = spaces_after_cond + 1;
        rows_after_n = rows_after_n + 1;
        star_after_cond = star_after_cond - 1;
    }
}