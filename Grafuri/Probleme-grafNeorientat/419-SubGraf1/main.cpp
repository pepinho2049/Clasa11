#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("subgraf1.in");
ofstream fout("subgraf1.out");

int m[101][101];
int n, i, j;
int main()
{
    fin >> n;
    while(fin >> i >> j){
        if(m[i][j] == 0){
            m[i][j] =  m[j][i] = 1;
            m[i][0]++;
            m[j][0]++;
        }
    }
    int minim = 101;
    for(int i = 1 ; i <= n; i++){
        if(m[i][0] < minim) minim = m[i][0];
    }
    for(int i = 1; i <=n ; i++){
        for(int j = 1; j <= n; j++){
            if(m[i][0] == minim){
                m[i][j] = 0;
                m[j][i] = 0;
            }
        }
    }
    int suma = 0;
    for(int i = 1; i <=n ; i++){
        for(int j = 1; j <= n; j++){
            suma+= m[i][j];
        }
    }
    fout << suma/2;
    return 0;
}
