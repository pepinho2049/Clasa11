#include <iostream>

using namespace std;

int divide(int v[], int st, int dr){
    if(dr == st) return v[dr];
    int middle = (st+dr)/2;
    int maxst = divide(v, st, middle);
    int maxdr = divide(v, middle+1, dr);
    return maxst > maxdr;
}
int main(){
    int n;
    cin >> n;
    int v[n+1];
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    cout << divide(v, 0, n-1);
}