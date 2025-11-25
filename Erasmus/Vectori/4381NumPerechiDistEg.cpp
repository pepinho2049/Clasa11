#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n+1];
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int st = 0, dr = n-1, cate = 0;
    while(st < dr){
        if(v[st]/10%10 == v[dr]/10%10){
            cate++;
        }
        st ++;
        dr--;
    }
    cout << cate;
}