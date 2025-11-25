#include <iostream>

using namespace std;
int n,v[50];

int cmmdc(int a, int b){
    if(b == 0) return a;
    else return cmmdc(b, a%b);
}
// varianta iterativă
/*
int cmmdcvect(int v[], int n){
    int temp = v[0];
    for(int i = 1; i <n; i++){
        temp = cmmdc(temp, v[i]);
    }
    return temp;
}
*/

//varianta Divide et Impera
int divide(int v[], int st, int dr){
    if(dr-st <=1) return cmmdc(v[st], v[dr]);
    int mijl = (st+dr)/2;
    return cmmdc(divide(v, st, mijl), divide(v, mijl+1, dr));   
}


int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout<< divide(v, 0, n-1);
}