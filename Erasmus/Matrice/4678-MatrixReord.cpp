#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m, a[101][101];
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        int impare[101], pare[101], catei=0, catep=0;
        for(int j=0; j<m; j++){
            if(a[i][j] % 2 != 0){
                impare[catei++] = a[i][j];
            } else {
                pare[catep++] = a[i][j];
            }
        }
        sort(impare, impare + catei);
        sort(pare, pare + catep);
        for(int j=0; j<catei; j++){
            a[i][j] = impare[j];
        }
        for(int j=0; j<catep; j++){
            a[i][catei + j] = pare[j];
        }
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] <<' ';
        }
        cout << "\n";
    }

}