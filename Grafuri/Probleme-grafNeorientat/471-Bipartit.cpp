#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bipartit.in");
ofstream fout("bipartit.out");

int v[101], a[101][101];

int main() {
    int n, m, k, x, y;
    fin >> n >> m;
    
    while(m--) {
        fin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    
    fin >> k;
    while(k--) {
        fin >> x;
        v[x] = 1;
    }

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(i != j)
                if(a[i][j] == 1 && v[i] == v[j]) {
                    fout << "NU";
                    return 0;
                }

    fout << "DA";
}