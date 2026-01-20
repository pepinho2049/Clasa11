#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("componenteconexe2.in");
ofstream fout("componenteconexe2.out");

int a[101][101], viz[101],n,x,y,muchii,noduri;

void dfs(int nod){
    viz[nod] = 1;
    for(int i = 1; i <= n; i++){
        if(a[nod][i] == 1 && viz[i] ==0){
            noduri++;
            dfs(i);
        }
    }
}

int main()
{
    fin >> n;
    while(fin >> x >> y){
        if(a[x][y] != 1){
            a[x][y] = a[y][x] = 1;
            muchii++;
        }
    }
    for(int nod = 1; nod <= n; nod++){
        if(viz[nod] == 0){
            dfs(nod);
        }
    }
    fout << muchii-noduri;
    /// sau din nr total de muchii scad (nr noduri componenta conexa-1)
    return 0;
}
