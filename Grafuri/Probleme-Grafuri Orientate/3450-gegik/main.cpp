#include <iostream>

using namespace std;
int dext[101], dint[101];


int main(){
    int n,m,x,y,k;
    cin >> n >> m >> k;
    for(int i = 1; i <= m; i++){
        cin >> x >> y;
        dext[x]++;
        dint[y]++;
    }
    int cateeste = 0;
    for(int i = 1; i <= n; i++){
        if(dext[i] + dint[i] == k){
            cateeste++;
            cout << i << " ";
        }
    }
    if(cateeste == 0) cout << "NU EXISTA";
}