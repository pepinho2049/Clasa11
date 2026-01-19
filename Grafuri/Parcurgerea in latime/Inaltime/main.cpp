#include <iostream>
#include <fstream>
using namespace std;


int a[100][100], n, viz[100];

void citire(){
    ifstream fin("noduri.in");
    int x,y;
    fin >> n;
    while(fin >> x >> y){
        a[x][y] = a[y][x] = 1;
    }
}

void adancime(int nod){
    viz[nod] = 1;
    cout << nod << " ";
    for(int i = 1; i <= n; i++){
        if(a[nod][i] == 1 && viz[i] == 0)
            adancime(i);
    }
}
int main()
{
    citire();
    adancime(1);
    return 0;
}
