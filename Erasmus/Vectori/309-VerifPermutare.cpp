#include <iostream>
using namespace std;

int frecv[101];
int main(){
    int n,x;
    cin >> n;
    for(int i=1 ; i<=n ; i++){
        cin >> x;
        if(x>0 && x <=n) frecv[x]++;
    }
    int perm = 1;
    for(int i=1 ; i<=n ; i++){
        if(frecv[i] != 1){
            perm = 0;
            break;
        }
    }
    if(perm) cout << "DA";
    else cout << "NU";
}