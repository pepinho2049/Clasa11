#include <iostream> 

using namespace std;

int main(){
    int n, m , a[101][101];
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int ult = a[n-1][m-1];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i == 0 || i == n-1 || j == 0 || j == m-1){
                a[i][j] = ult;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] <<' ';
        }
        cout << "\n";
    }
}
