#include <iostream>
using namespace std;
/*
int divide(int a[100][100], int l1, int c1, int l2, int c2){
    if(l2 < l1 || c2 < c1) return 0;
    if(l1 == l2 && c1 == c2){
        if(a[l1][c1] % 2 == 0) return a[l1][c1];
        else return 0;
    }
    else{
        int lm = (l1+l2)/2;
        int cm = (c1+c2)/2;
        return divide(a, l1, c1, lm, cm) + divide(a, l1, cm+1, lm, c2) + divide(a, lm+1, c1, l2, cm) + divide(a, lm+1, cm+1, l2, c2);

    }
} 
*/

int divide(int a[100][100], int st, int dr, int i){
    if(st == dr){
        if(a[i][st]%2 == 0) return a[i][st];
        else return 0;
    }
    else{
        int m = (st+dr)/2;
        int stanga = divide(a, st, m, i);
        int dreapta = divide(a, m+1, dr, i);
        return stanga + dreapta;
    }
}


int main(){
    int n,m;
    cin >> n >> m;
    int a[100][100];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int s = 0;
    for(int i =0; i<n; i++){
        s += divide(a, 0, m-1, i);
    }
    cout << s;
}