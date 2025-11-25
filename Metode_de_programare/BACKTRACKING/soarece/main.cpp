#include <iostream>
//#include <fstream>
using namespace std;
//ifstream fin("soarece.in");
//ofstream fout("soarece.out");
int a[11][11],n,m, is,js,ib,jb, catesol = 0, di[5] = {0,-1, 0, 1, 0}, dj[5] = {0, 0, 1,0, -1};
void afisare(){
    
}
void bkt(int k, int is, int js){
    for(int p = 1; p<=4; p++){
        int pozi = is + di[p];
        int pozj = js + dj[p];
        if(a[pozi][pozj] == 0 && pozi >= 1 && pozi<=n && pozj >=1 && pozj <=m){
        
            if(pozi == ib && pozj == jb){
                catesol ++;
            }
            else{
            a[pozi][pozj] = k;
            bkt(k+1, pozi, pozj);
            a[pozi][pozj] = 0;
            }
        }
    }    
}



int main()
{
    cin >> n >> m;
    for(int i = 1; i<n; i++){
        for(int j = 1; j<m; j++){
            cin >> a[i][j];
        }
    }
    cin >> is >> js>> ib >> jb;
    bkt(2, is, js);
    cout << catesol;
    return 0;
}