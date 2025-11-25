#include <iostream>
using namespace std;

int main() {
    int a[101][101], m, n, k;
    cin >> k >> m >> n;

    bool col[101] = {false}; 

    for(int i = 1; i <= m ; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == k) {
                col[j] = true; 
            }
        }
    }

    int suma = 0;
    for(int j = 1; j <= n; j++)
        if(col[j]) suma += j;

    if(suma) cout << suma;
    else cout << "NU EXISTA";

    return 0;
}
