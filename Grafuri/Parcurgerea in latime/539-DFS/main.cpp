#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("dfs.in");
ofstream fout("dfs.out");

int a[100][100], n,m,X,viz[100];

void adancime(int nod){
    viz[nod] = 1;
    fout << nod << " ";
    for(int i = 1; i <= n; i++){
        if(a[nod][i] ==1 && viz[i] == 0){
            adancime(i);
        }
    }
}

int main()
{
    int x,y;
    fin >> n >> m >> X;
    for(int i =1; i <= m; i++){
        fin >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    adancime(X);
    return 0;
}
