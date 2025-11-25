#include <iostream>

using namespace std;

int main(){
    int a[101][101],n,m;
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i<=n; i++){
        int sumlin = 0, maxim = -1;
        for(int j = 1; j <= m; j++){
            sumlin += a[i][j];
            if(maxim < a[i][j]) maxim = a[i][j];
        }
        cout << sumlin - maxim <<" ";
    }
}