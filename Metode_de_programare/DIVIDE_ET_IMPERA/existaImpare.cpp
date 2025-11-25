#include <iostream>
using namespace std;


int divide(int v[], int st, int dr){
    if(st == dr){ 
        if(v[st]%2 == 0) return 0;
        else return 1;
    }
    else{
        int m = (st+dr)/2;
        int stg = divide(v, st, m);
        int drr = divide(v, m+1, dr);
        if( stg || drr) return 1;
        else return 0;
    }
}

int main(){
    int n;
    cin >> n;
    int v[n+1];
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    if(divide(v,0, n-1)) cout << "DA";
    else cout << "NU";
}