#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n,m, a[100][100], minim = INT_MAX, imin, jmin;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] < minim){
                minim = a[i][j];
                imin = i;
                jmin = j;
            }
        }
    }
    for(int k = 0; k<m; k++){
        a[k][jmin] = a[m-1][n-1];
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j]<< ' ';
        }
        cout<<endl;
    }
}