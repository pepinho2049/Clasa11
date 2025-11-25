
#include  <bits/stdc++.h>
using namespace std;
ifstream fin("bila.in");
ofstream fout("bila.out");
int a[21][21], depl[21][21],n,m, is, js, maxim;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

void citire(){
    fin >> n >> m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m;j++){
            fin >> a[i][j];
        }
    }
    fin >> is >> js;

}
void back(int x, int y, int pas){
    if(pas <= depl[x][y]) return;
    depl[x][y] = pas;
    for(int i = 0; i<4; i++){
        int xnou = x+dx[i];
        int ynou = y+dy[i];
        if(xnou>=1 && xnou<=n && ynou>=1 && ynou<=m)
            if(a[xnou][ynou]<a[x][y] && depl[xnou][ynou]==0)
        {


            depl[xnou][ynou]=pas;
            if(xnou==1 || ynou==1 || xnou==n || ynou==m)
                {if(pas>maxim)
                    maxim=pas;

                }
            else back(xnou, ynou,pas+1);

            depl[xnou][ynou]=0;

        }
    }
}


int main(){
    citire();

    depl[is][js] = 1;
    back(is,js, 2);
    fout << maxim;
}
