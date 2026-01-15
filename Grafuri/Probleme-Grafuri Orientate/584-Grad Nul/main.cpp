#include <iostream>

using namespace std;
int gradint[101];
int main(){
    int n, m, x,y;
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        cin >> x >> y;
        gradint[y]++;
    }
    int catenule = 0;
    for(int i = 1; i <= n; i++){
        if(gradint[i] == 0){
            catenule++;
            cout << i << " ";
        }
    }
    if(catenule == 0) cout << "NU EXISTA";
}