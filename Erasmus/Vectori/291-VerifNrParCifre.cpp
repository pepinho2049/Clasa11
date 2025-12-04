#include <iostream>

using namespace std;

int nrcifre(int n){
    int c = 0;
    while(n){
        c++;
        n /= 10;
    }
    return c;
}
int main(){
    int n, estebine = 1;
    cin >> n;
    int v[n+1];
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        if(nrcifre(v[i]) % 2){
            estebine = 0;
            break;
        }
    }
    if(estebine) cout << "DA";
    else cout <<"NU";

}