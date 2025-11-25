#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int a[101][101];

struct st{
    int suma,linie;
}vector[101];


int suma_linie(int a[101][101], int i){
    int suma = 0;
    for(int j = 0; j<m;j++){
        suma+=a[i][j];
    }
    return suma;
}

int main(){
    cin >>n >> m;
    for(int i=0; i<n;i++){
        for(int j =0; j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        vector[i] = {suma_linie(a, i), i};
    }
    sort(vector, vector+n, [](st x, st y){
        return x.suma < y.suma;
    });
    for(int i = 0; i <n; i++){
        for(int j = 0; j <m; j++){
            cout << a[vector[i].linie][j] <<' ';
        }
        cout << "\n";
    }
}
