#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("kruskal.in");
ofstream fout("kruskal.out");

int n, m, conex[100], cost, cate;

struct{
    int  x, y, c;
}muchie[5000], arbore[100];

void citire(){
    fin >> n >> m;
    for(int i = 1; i <= m; i++){
        fin >> muchie[i].x >> muchie[i].y >> muchie[i].c;

    }
    for(int i = 1; i <=n ; i++){
        conex[i] = i;
    }
}

void sortare(){
    for(int i = 1; i < m; i++){
        for(int j= i+1; j <= m; j++){
            if((muchie[i].c > muchie[j].c) ||(muchie[i].c ==  muchie[j].c && muchie[i].x > muchie[j].x))
                swap(muchie[i], muchie[j]);
        }
    }
}
void kruskal(){
    for(int i = 1; i <= m; i++){
        if(conex[muchie[i].x] != conex[muchie[i].y]){
            arbore[cate] = muchie[i];
            cate++;
            cost+=muchie[i].c;
            for(int j = 1; j <= n;j++){
                if(conex[muchie[i].y] == conex[j]) conex[j] = conex[muchie[i].x];
            }
        }
    }
}

void afisare(){
    fout << cost << "\n";
    for(int i = 0; i < cate; i++){
        fout << arbore[i].x << " " << arbore[i].y << "\n";
    }
}

int main()
{
    citire();
    sortare();
    kruskal();
    /*
    for(int i = 1; i <= m; i++){
        fout << muchie[i].x << " " << muchie[i].y << " " << muchie[i].c << endl;
    }*/
    afisare();
    return 0;
}
