#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("dijkstra.in");
#define INF 0x3F3F3F3F /// in hexazecimal, F=15

int a[101][101], n,p,d[101], f[101];

void citire(){
    fin >> n >> p; /// p = nodul de start
    int x,y,c;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            a[i][j] = INF;
        }
    }
    while(fin >> x >> y >> c){
        a[x][y] = c;
    }

    f[p] = 1; // f[] = vectorul de noduri folosite

    for(int i = 1; i <= n; i++)
        d[i] = a[p][i]; //d[] = vectorul de costuri
    d[p] = 0;
}

void dij(){
    for(int k = 1; k <= n-1; k++){ /// de cate ori fac parcurgeile
        int minim = INF, poz;
        for(int i = 1; i <= n; i++){
            if(minim > d[i] && !f[i]){ /// Daca nodul i nu a fost vizitat si costul sau este mai mic decat minim
                minim = d[i];
                poz = i;
            }
        }       
        if(minim != INF){ /// Ca la Roy-Floyd
            f[poz] = 1;
            for(int i = 1; i <= n; i++){
                if(!f[i] && d[i] > d[poz] + a[poz][i]){
                    d[i] = d[poz] + a[poz][i];
                }
            }
        }
    }
}

int main(){
    citire();
    dij();
    for(int i = 1; i <= n; i++){
        if(d[i] == INF) cout <<-1 << " ";
        else cout << d[i] << " ";
    }
}
