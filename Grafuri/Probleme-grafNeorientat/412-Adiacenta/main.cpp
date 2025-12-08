#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("adiacenta.in");
ofstream fout("adiacenta.out");

int matr[101][101];

int main()
{
    int n, m, i,j;
    fin >> n >> m;
    while(fin >> i >> j){
        matr[i][j] = 1;
        matr[j][i] = 1;
    }
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= n; j++){
            fout << matr[i][j] <<" ";
        }
        fout << "\n";
    }
    return 0;
}