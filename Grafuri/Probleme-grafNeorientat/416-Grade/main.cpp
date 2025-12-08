#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("grade.in");
ofstream fout("grade.out");


int m[101][101];

int main()
{
    int n,i,j;
    fin >> n;
    while(fin >> i >> j){
        m[i][j] = m[j][i] = 1;
    }
    for(int i = 1; i <= n; i++){
        int dx = 0;
        for(int j = 1; j <= n; j++){
            dx += m[i][j];
        }
        fout << dx <<" ";
    }
    return 0;
}
