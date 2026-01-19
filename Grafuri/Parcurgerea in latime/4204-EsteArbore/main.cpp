#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("estearbore.in");
ofstream fout("estearbore.out");
int a[101][101],viz[101], n,x,y;

void dfs(int nod){
    viz[nod] = 1;
    for(int i = 1; i <= n; i++){
        if(a[nod][i] == 0 && viz[i] == 0)
            dfs(i);
    }
}

int main()
{
    int muchii;
    fin >> n;
    while(fin >> x >> y){
        if(a[x][y] !=1){
            a[x][y] = a[y][x] = 1;
            muchii++;
        }
    }
    dfs(1);
    int nueste = 1;
    for(int i = 1; i <= n; i++){
        if(viz[i] == 0){
            nueste = 0;
            break;
        }
    }
    if(nueste && muchii == n-1) fout << "DA";
    else fout <<"NU";
    return 0;
}
