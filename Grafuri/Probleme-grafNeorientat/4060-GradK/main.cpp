#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("gradk.in");
ofstream fout("gradk.out");

int n, i, j, k;
int m[101][101], grade[101], noduri[101];

int main()
{
    fin >> n >> k;
    while(fin >> i >> j){
        m[i][j] = m[j][i] = 1;
    }
     for(int i = 1; i <= n; i++){
        int dx = 0;
        for(int j = 1; j <= n; j++){
            dx += m[i][j];
        }
        grade[i] = dx;
    }
    int cate = 0, referinta = k;
    for(int i = 1; i <= n; i++){
            if(grade[i] == referinta){
                cate++;
                noduri[cate] = i;
            }

    }
    if(cate == 0) fout << "NU EXISTA";
    else{
        fout << cate <<" ";
        for(int i = 1; i <= cate ; i++) fout << noduri[i] << " ";
    }
    return 0;
}
