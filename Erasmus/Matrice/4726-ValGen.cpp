#include <iostream>
#include <cmath>
using namespace std;
int valoareGenerata(int a, int b) {
    int powB = 1;
    int temp = b;
    while(temp > 0) {
        powB *= 10;
        temp /= 10;
    }
    int ab = a * powB + b; // a urmat de b

    int powA = 1;
    temp = a;
    while(temp > 0) {
        powA *= 10;
        temp /= 10;
    }
    int ba = b * powA + a; // b urmat de a

    return (ab < ba) ? ab : ba;
}

int main(){
    int m,n, a[51][51];
    cin >> m >> n;
    for(int i = 1; i <=m ; i++){
        for(int j = 1; j <= n; j++)
            a[i][j] = valoareGenerata(i,j);
    }
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}