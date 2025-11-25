#include <iostream>

using namespace std;

bool egalcol(int a[101][101], int j, int m){
    for(int i = 1; i < m; i++){
        if(a[0][j] != a[i][j]) return false;
    }
    return true;
}


int main(){
    int n,m, a[101][101], exista = 0;
    cin >> m >> n;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    
    for(int j = 0; j < n; j++){
        if(egalcol(a, j, m) == true){
            cout << a[0][j] <<' ';
            exista++;
        }
    }
    if(exista == 0) cout << "nu exista";
    

}