#include <iostream>
using namespace std;

int divide(int v[], int st, int dr){
    if(st == dr){
        if(v[st]%2 == 0) return v[st];
        else return 0;
    }
    else{
        int m = (st+dr)/2;
        int stanga = divide(v, st, m);
        int dreapta = divide(v, m+1, dr);
        return stanga + dreapta;
    }
    
}
int main(){
    int n;
    cin >> n;
    int v[n+1];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout<<divide(v, 0, n-1);
}