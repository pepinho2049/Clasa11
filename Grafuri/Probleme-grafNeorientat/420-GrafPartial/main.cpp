#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("graf_partial.in");
ofstream fout("graf_partial.out");


int n, i, j;
int m[101][101];

int main()
{
    fin >> n;
    while(fin >> i >> j){
        m[i][j] = m[j][i] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n ; j++){
            if(i%2 == j%2){
                m[i][j] = m[j][i] = 0;
            }
        }
    }
    int suma = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n ; j++){
            suma+=m[i][j];
        }
    }
    fout << suma/2;
    return 0;
}
