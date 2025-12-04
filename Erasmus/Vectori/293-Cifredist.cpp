#include <iostream>
using namespace std;

int main(){
    int n,ordonat = 1;
    cin >> n;
    int v[n+1];
    for(int i = 1; i<= n; i++){
        cin >> v[i];
        for(int c = 0; c <= 9; c++){
            int cate = 0;
            int x = v[i];
            while(x){
                if(x%10 == c) cate++;
                x/=10;
            }
            if(cate > 1){
                ordonat = 0;
                break;
            }
        }
    }
    if(ordonat) cout << "DA";
    else cout << "NU";
}