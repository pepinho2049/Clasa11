#include <iostream>

using namespace std;

int a[101][101];

int main(){
    int n,m,x,y;
    cin >> n >> m;
    for(int i = 1; i <=m ; i++){
        cin >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=n;j++){
            if(a[i][j] == 1){
                for(int k = 1; k <= n; k++){
                    if(a[j][k] == 1 && a[k][i] == 1)
                    cout << i << " " << j << " " << k << " " <<"\n";
                }
            }
        }
    }
}