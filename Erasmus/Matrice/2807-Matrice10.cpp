#include <iostream>

using namespace std;



int main(){
    int n,m, a[101][101], l1,c1,l2,c2,minim = 10001;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            if(j == 0 && a[i][j] < minim){
                minim = a[i][j];
                l1 = i;
                c1 = j;
            }
            if(j == m-1 && a[i][j] < minim){
                minim = a[i][j];
                l2 = i;
                c2 = j;
            }
        }
        
    }
    swap(a[l1][c1], a[l2][c2]);

    for(int i = 0; i< n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] <<' ';
        }
        cout << "\n";
    }
    
}