#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("saturate.in");
ofstream fout("saturate.out");
int n, muchie, i, j, m[101][101];

int main()
{
    fin >> n >> muchie;
    while(fin >> i >> j){
        m[i][j] = m[j][i] = 1;
        m[i][0]++;
        m[j][0]++;
    }
    int cate = 0;
    for(int i = 1; i <= n; i++){
            if(n%2 == 0){
                if(m[i][0] >= n/2){
                    fout << i<<" ";
                    cate++;
                }
            }
            else if(n%2 != 0){
                if(m[i][0] > n/2){
                    fout << i <<" ";
                    cate++;
                }
            }

    }
    if(cate == 0) fout <<"NU EXISTA";
    return 0;
}
