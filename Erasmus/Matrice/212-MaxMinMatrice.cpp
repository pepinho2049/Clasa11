#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m , a[101][101], vectmin[101] = {0}, ind = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        int minim = 1001;
        for(int j = 0; j < m; j++){
            if(a[i][j] < minim) minim = a[i][j];
        }
        vectmin[ind++] = minim;
    }
    sort(vectmin, vectmin + ind);
    cout << vectmin[ind-1];
}