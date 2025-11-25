#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("numere.in");
int frecva[101], frecvb[101];

int ogl(int n){
    int ogl = 0;
    while(n){
        ogl = ogl * 10 + n % 10;
        n /= 10;
    }
    return ogl;
}
int main(){
    int na, nb;
    fin >> na >> nb;
    for(int i = 1; i <= na; i++){
        int x;
        fin >> x;
        int mod = x % 100;
        int modu = mod%10;
        int modz = mod/10;
        int nr = min(modu,modz)*10 + max(modu, modz);
        frecva[nr]++;
    }
    for(int i = 1; i <= nb; i++){
        int x;
        fin >> x;
        int mod = x % 100;
        int modu = mod%10;
        int modz = mod/10;
        int nr = min(modu,modz)*10 + max(modu, modz);
        frecvb[nr]++;
    }
    int cate = 0;
    for(int i = 0; i <= 99 ; i++){
        cate += frecva[i] * frecvb[i];
    }
    cout << cate;
}
