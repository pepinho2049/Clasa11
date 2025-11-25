#include <iostream>
using namespace std;
int main()
{
    int n;
    double a[101][101], suma = 0, med;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int j = 0; j < n; j++){
        suma = 0;
        for(int i = 0; i < n; i++){
            suma += a[i][j];
        }
        med = suma / n;
        for(int i = n; i >= n/2 + 1; i--){
            a[i][j]= a[i-1][j];
        }
        a[n/2][j] = med;
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j]<<" ";
        }
        cout << "\n";
    }
    return 0;
}