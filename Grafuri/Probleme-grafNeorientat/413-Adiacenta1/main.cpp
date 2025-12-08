#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("adiacenta1.in");
ofstream fout("adiacenta1.out");
int matr[101][101];
int main(){
    int i, j, n=-1;
    while(fin >> i >> j){
        if(i > n) n = i;
        if(j > n) n = j;
        matr[i][j] = 1;
        matr[j][i] = 1;
    }
    for(int i = 1; i <=n ; i++){
        for(int j = 1; j <=n; j++){
            fout << matr[i][j]<<" ";
        }
        fout << "\n";
    }
}
