#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int v[n+1], poz[n+1];
    for(int i = 1; i <= n; i++){
        cin >>v[i];
        poz[i] = i;
    }
    for(int i =1 ; i< n; i++){
        for(int j = i+1; j <= n; j++){
            if(v[i] > v[j]){
                swap(v[i], v[j]);
                swap(poz[i], poz[j]);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << poz[i] << " ";
    }
}