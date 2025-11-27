#include <iostream>

using namespace std;

int main(){
    int n, a[1001];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i<=n; i++){
        if(a[i]%2 == 0){
            for(int j = i; j<=n; j++){
                a[j] = a[j+1];
            }
            n--;
            i--;
        }
    }
    for(int i = 1; i<=n; i++){
        cout << a[i] << " ";
    }
    
}