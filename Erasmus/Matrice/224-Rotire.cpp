#include <iostream>

using namespace std;

int main(){
    int n,m,a[101][101], b[101][101];
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    
    for(int i = m-1; i >= 0 ;i--){
        for(int j = 0; j <n; j++){
            cout << a[j][i] <<' ';
        }
        cout << "\n";
    }


}