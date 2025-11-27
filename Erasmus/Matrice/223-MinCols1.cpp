#include <iostream>
using namespace std;

int main(){
    int a[101][101],n,rez = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    bool adv = false;
    for(int j = 1; j <=n ; j++){
        int minim = a[1][j];
        for(int i = 2; i <= n; i++){
            if(a[i][j] < minim){
                minim = a[i][j];
            }
        }
        if(minim == a[n-j+1][j]){
            rez = (rez * minim)%10;
            adv = true;
        }
    }
    if(adv){
        cout << rez;
    }else{
        cout << "NU EXISTA";
    }
}