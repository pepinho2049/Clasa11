#include <iostream>
using namespace std;
bool verifOrdonat(int v[], int st, int dr){
    if(st == dr){
        return true;
    }
    int m = (st + dr) / 2;
    bool leftEqual = verifOrdonat(v, st, m);
    bool rightEqual = verifOrdonat(v, m + 1, dr);
    return leftEqual && rightEqual && (v[m] <= v[m + 1]);
}
int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    if(verifOrdonat(v, 0, n - 1)){
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}