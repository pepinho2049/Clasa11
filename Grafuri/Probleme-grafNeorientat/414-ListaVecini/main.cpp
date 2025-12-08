#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("listavecini.in");
ofstream fout("listavecini.out");

//pe coloana de indice 0 vom pastra nr de vecini
int matr[101][101];



int main()
{
    int n;
    fin >> n;
    int i, j;
    while(fin >> i >> j){
        if(matr[i][j] == 0){// pt a scapa de dubluri
            matr[i][0]++;
            matr[j][0]++;
            matr[i][j] = matr[j][i] = 1;
        }
    }
    for(int i = 1; i<=n ; i++){
        fout << matr[i][0] <<" ";
        for(int j = 1; j <= n; j++){
            if(matr[i][j] == 1)
                fout << j <<" ";
        }
        fout << "\n";
    }
    return 0;
}
