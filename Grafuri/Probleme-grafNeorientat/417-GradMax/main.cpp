#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("gradmax.in");
ofstream fout("gradmax.out");

int n,i,j, k;
int m[101][101];
int grade[101];
int main()
{

    fin >> n;

    while(fin >> i >> j){
        m[i][j] = m[j][i] = 1;
    }
    int maxim = -1;
    for(int i = 1; i <= n; i++){
        int dx = 0;
        for(int j = 1; j <= n; j++){
            dx += m[i][j];
        }
        grade[i] = dx;
        if(grade[i] > maxim) maxim = grade[i];
    }
    int cateeste = 0;
    for(int i = 1; i <= n; i++){
        if(grade[i] == maxim){
            cateeste++;
        }
    }
    fout << cateeste<<" ";
    for(int i = 1; i <= n; i++){
        if(grade[i] == maxim){
            fout << i << " ";
        }
    }
    return 0;
}
