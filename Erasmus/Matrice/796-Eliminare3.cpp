#include <iostream>

using namespace std;

int main(){
    int m,n, a[51][51];
    cin >> m >> n;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    for(int col = 1; col <= n; col ++){
        a[m-1][col] = a[m][col];
    }
    for(int lin = 1; lin <= n; lin ++){
        a[lin][n-1] = a[lin][n];
    }
    for(int i = 1; i <=m; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << ' ';
        }
        cout << "\n";
    }
    
}