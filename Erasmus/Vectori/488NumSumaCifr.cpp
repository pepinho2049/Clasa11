#include <iostream>
using namespace std;

struct val{
    int valoare, sumdiv;
};

int sumacifr(int n){
    int suma = 0;
    while(n){
        suma += n%10;
        n/=10;
    }
    return suma;
}

int main(){
    int n, cate = 0;
    cin >> n;
    val v[n+1];
    int st = 0, dr = n-1;
    for(int i = 0; i <n; i++) {
        cin >> v[i].valoare;
        v[i].sumdiv = sumacifr(v[i].valoare);
    }
    while(st < dr){
        if(v[st].sumdiv == v[dr].sumdiv){
            cate++;
        }
        if(st+1 == dr){
            st++;
            dr = n;
        }
        else{
            dr--;
        }
    }
    cout << cate;
}