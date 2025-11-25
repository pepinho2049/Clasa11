#include <iostream>

using namespace std;

int main(){
    int n, a[21][21], nri = 1, nrp = 2;
    cin >> n;
    for(int i = 1; i <= 2*n; i++){
        if(i % 2 !=0){
            for(int j=1; j <= 2*n; j++){
                if(nri <= 4*n*n){
                    a[i][j] = nri;
                    nri+=2;
                }
            }
        }
        else{
            for(int j = 2*n; j>=1; j--){
                if(nrp <= 4*n*n){
                    a[i][j] = nrp;
                    nrp+=2;
                }
            }
        }
    }
    for(int i = 1; i <= 2*n; i++){
        for(int j = 1; j <= 2*n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}