#include <iostream>
using namespace std;
#include <climits>

int main() {
    int L, C;
    cin >> L >> C;

    int a[100][100];

    for (int i = 0; i < L; i++)
        for (int j = 0; j < C; j++)
            cin >> a[i][j];

    long long total = 0; 

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {

            int minVecin = INT_MAX; 

            if (i > 0 && a[i-1][j] < minVecin)
                minVecin = a[i-1][j];

            if (i < L-1 && a[i+1][j] < minVecin)
                minVecin = a[i+1][j];

            if (j > 0 && a[i][j-1] < minVecin)
                minVecin = a[i][j-1];

            if (j < C-1 && a[i][j+1] < minVecin)
                minVecin = a[i][j+1];

            if (minVecin < 1000000000 && a[i][j] < minVecin) {
                total += (minVecin - a[i][j]);
            }
        }
    }

    cout << total;

    return 0;
}
