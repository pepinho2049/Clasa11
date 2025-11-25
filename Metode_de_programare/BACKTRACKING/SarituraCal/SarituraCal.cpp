#include <iostream>
using namespace std;
int a[7][7], n,m,x,y, dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2}, dy[8] = {1, 2, 2, 1, -1, -2, -2 , -1};
void afisare(){
    for(int i = 1; i<=n; i++){
        for(int j =1; j<=m;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<"\n";
    }
    
}
void bkt(int k, int coordx, int coordy){
    for(int p =0; p < 8; p++){
        int xnou = coordx +dx[p];
        int ynou = coordy + dy[p];
        if(xnou >=1 && xnou<=n && ynou>=1 && ynou <=m && a[xnou][ynou] == 0){
            a[xnou][ynou] = k;
            if(k == n*m){
                afisare();
                exit(0); //inchide programul
            }
            else bkt(k+1, xnou, ynou);
            a[xnou][ynou] = 0;
        }
    }
}
int main(){
    cin >> n >> m >> x >> y;
    a[x][y] = 1;
    bkt(2, x, y);
}