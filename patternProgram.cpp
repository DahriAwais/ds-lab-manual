#include <iostream>
using namespace std;

int main() {
    // Print increasing pattern
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Print decreasing pattern
    for (int i = 7; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
