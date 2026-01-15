#include <iostream>

using namespace std;
int vectint[101], vectext[101], rez[101];
int main(){
    int n,m, x, j;
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        cin >> x >> j;
        vectint[j]++;
        vectext[x]++;
    }
    int cate = 0;
    for(int i = 1; i <=n ; i++){
        if(vectint[i] == vectext[i]){
            cate++;
            rez[cate] = i;
        }
    }
    cout << cate <<"\n";
    for(int k = 1; k <= cate; k++){
        cout << rez[k] << " "; 
    }
}