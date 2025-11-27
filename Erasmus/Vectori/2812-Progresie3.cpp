#include <iostream>
#include <algorithm>
using namespace std;


int a[1000000];

int main(){
    int n = 0, ind;
    while(cin >> ind){
        a[n++] = ind;
    }
    bool este = true;
    for (int i = 0; i < n; i++) {      
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                for (int k = i; k < n - 1; k++)
                    a[k] = a[k + 1];
                n--;      
                i--;      
                break;
            }
        }
    }
    sort(a, a+n);
    int r = a[1]- a[0];
    for(int i = 1; i <n; i++){
        if(a[i]- a[i-1] != r){
            este = false;
            break;
        }
    }
    if(este) cout << r;
    else cout << "NU";
    
}

