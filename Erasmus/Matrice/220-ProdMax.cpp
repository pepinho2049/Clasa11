
#include <iostream>
using namespace std;


int main() {

    int m, n;
    cin >> m >> n;

    int a[101][101];

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    bool Zero[101] = {0};
    int cnt2[101] = {0};


    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= m; i++) {
            if (a[i][j] == 0)
                Zero[j] = true;
            else if (a[i][j] == 2)
                cnt2[j]++;
        }
    }

    int maxVal = -1;

    for (int j = 1; j <=n; j++) {
        int val = Zero[j] ? -1 : cnt2[j];
        if (val > maxVal)
            maxVal = val;
    }

    for (int j = 1; j <= n; j++) {
        int val = Zero[j] ? -1 : cnt2[j];
        if (val == maxVal)
            cout << j  << " ";
    }

    return 0;
}


