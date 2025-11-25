#include <iostream>
using namespace std;

int main() {
    int n, a[101][101];
    cin >> n;

    int t1 = 1;
    int t2 = 1;
    int urm;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = t1 % 10;
            urm = t1 + t2;
            t1 = t2;
            t2 = urm % 10;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}