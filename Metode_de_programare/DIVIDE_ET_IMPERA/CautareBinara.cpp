#include <iostream>
#include <algorithm>
using namespace std;

int cautareBinara(int v[], int st, int dr, int x) {
    if (st > dr) {
        return -1;
    }
    int m = (st + dr) / 2;
    if (v[m] == x) {
        return m; 
    } else if (v[m] < x) {
        return cautareBinara(v, m + 1, dr, x);
    } else {
        return cautareBinara(v, st, m - 1, x);
    }
}
int main(){
    int n, x;
    cin >> n >> x;
    int v[n+1];
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    sort(v, v + n);
    int rezultat = cautareBinara(v, 0, n-1, x);
    if (rezultat != -1) {
        cout << "Elementul " << x << " se afla la indexul " << rezultat << ".";
    } else {
        cout << "Elementul " << x << " nu a fost gasit in vector.";
    }
    
}