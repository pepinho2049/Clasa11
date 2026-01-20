#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("componenteconexe.in");
ofstream fout("componenteconexe.out");

int a[101][101], viz[101],n,x,y;
int comp;
void dfs(int nod){
    viz[nod] = comp;
    for(int i = 1; i <= n; i++){
        if(a[nod][i] == 1 && viz[i] ==0)
            dfs(i);
    }
}

int main()
{
    fin >> n;
    while(fin >> x >> y){
        if(a[x][y] != 1){
            a[x][y] = a[y][x] = 1;
        }
    }
    for(int nod = 1; nod <= n; nod++){
        if(viz[nod] == 0){
            comp++;
            dfs(nod);
        }
    }
    fout << comp <<"\n";
    for(int i = 1; i <= comp; i++){
        for(int j = 1; j <= n; j++){
            if(viz[j] == i)
                fout << j << " ";
        }
        fout << "\n";
    }
    return 0;
}
