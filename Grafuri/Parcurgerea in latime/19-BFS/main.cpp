#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("BFS.in");
ofstream fout("BFS.out");
int a[100][100], viz[100], n,m,X,coada[100];


void latime(int nod){
    viz[nod] = 1;
    fout << nod << " ";
    int st=1,dr=1;
    coada[st] = nod;
    while(st <= dr){
        int x = coada[st];
        for(int i = 1; i <= n; i++){
            if(a[x][i] == 1 && viz[i] == 0){
                viz[i] = 1;
                fout << i << " ";
                dr++;
                coada[dr] = i;
            }
        }
        st++;
    }
}

int main()
{
    int j,k;
    fin >> n >> m >> X;
    for(int i = 1; i <= m; i++){
        fin >> k >> j;
        a[k][j] = a[j][k] = 1;
    }
    latime(X);
    return 0;
}
