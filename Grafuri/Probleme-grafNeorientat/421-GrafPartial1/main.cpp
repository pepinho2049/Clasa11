#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("graf_partial_1.in");
ofstream fout("graf_partial_1.out");

int n, i, j, m[101][101];

int main()
{
    fin >> n;
    while(fin >> i >> j){
        m[i][j] = m[j][i] = 1;
        m[i][0]++;
        m[j][0]++;
    }
    int minim = 101, maxim = -1;
    for(int i = 1; i <= n; i++){
        if(m[i][0] < minim) minim = m[i][0];
        if(m[i][0] > maxim) maxim = m[i][0];
    }
    int cate = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=n; j++){
            if((i == minim && j == maxim) || (i == maxim && j == minim)){
                cate++;
                m[i][j] = m[j][i] = 0;
            }
        }
    }
    fout << cate<<"\n";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=n; j++){
            fout << m[i][j] <<" ";
        }
        fout << "\n";
    }
    return 0;
}
