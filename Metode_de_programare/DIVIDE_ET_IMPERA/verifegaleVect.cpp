#include <iostream>
using namespace std;
bool verifEgale(int v[], int st, int dr){
    if(st == dr){
        return true;
    }
    int m = (st + dr) / 2;
    bool leftEqual = verifEgale(v, st, m);
    bool rightEqual = verifEgale(v, m + 1, dr);
    return leftEqual && rightEqual && (v[st] == v[dr]);
}
int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    if(verifEgale(v, 0, n - 1)){
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}