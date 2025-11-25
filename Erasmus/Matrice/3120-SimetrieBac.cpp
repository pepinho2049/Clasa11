#include <iostream>


using namespace std;

int main(){
    int n,m, a[101][101], simetrie = 1;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int j = 0 ; j < m/2; j++){
        for(int i = 0 ; i < n; i++){
            if(a[i][j] != a[i][m-1-j]){
                simetrie = 0;
                break;
            }
        }
    }
    if(simetrie) cout << "DA";
    else cout << "NU";
}