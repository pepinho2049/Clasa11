#include <iostream>
using namespace std;
int divide(int v[], int st, int dr){
    if(st == dr) return v[st];
    int m = (st+dr)/2;
    return divide(v, st, m) + divide(v, m+1, dr);
}
int main(){
    int n;
    cin >> n;
    int v[n+1];
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << divide(v, 0, n-1);
}