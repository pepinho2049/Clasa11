#include <iostream>

using namespace std;

int cmmdc (int a, int b){
    if(b == 0)
        return a;
    return cmmdc(b, a % b);
}
int divide(int v[], int st, int dr){
    if(st == dr) return v[st];
    int middle = (st+dr)/2;
    int cmmdcstanga = divide(v, st, middle);
    int cmmdcdreapta = divide(v, middle+1, dr);
    return cmmdc(cmmdcstanga, cmmdcdreapta);
}
int main(){
    int n;
    cin >> n;
    int v[n+1];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    cout << divide(v, 0, n - 1);
}