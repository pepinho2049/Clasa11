#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("conex.in");
ofstream fout("conex.out");

int n,x,y,a[101][101], viz[101];

void dfs(int nod){
    viz[nod] = 1;
    for(int i = 1; i <= n; i++){
        if(a[nod][i] == 1 && viz[i] == 0)
            dfs(i);
    }
}

int main()
{
    fin >> n;
    while(fin >> x >> y){
        if(a[x][y] != 1)
            a[x][y] = a[y][x] = 1;
    }
    dfs(1);
    int esteconex = 1;
    for(int i = 1; i <= n; i++){
        if(viz[i] == 0){
            esteconex = 0;
            break;
        }
    }
    fout << (esteconex ? "DA" : "NU");
    return 0;
}
