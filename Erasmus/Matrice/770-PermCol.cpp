#include <iostream>

using namespace std;

int main(){
    int a[101][101],n,m;
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <=n ;i++){
        for(int j = 1; j <m; j++){
            swap(a[i][j], a[i][j+1]);
        }
    }
    for(int i = 1; i <=n ;i++){
        for(int j = 1; j <=m; j++){
            cout << a[i][j] <<" ";
        }
        cout << "\n";
    }
}