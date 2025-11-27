#include <iostream>

using namespace std;

bool maxim(int nr, int vm[], int m){
    for (int i = 0; i < m; i++)
        if (nr <= vm[i]) return false;
    return true;
}
int main(){
    int n, m, vn[101], vm[101];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> vn[i];
    }
    cin >> m;
    for(int i =0; i < m; i++){
        cin >> vm[i];
    }
    int cate = 0;
    for(int i = 0; i< n; i++){
        if(maxim(vn[i], vm, m)){
            cate++;
        }
    }
    cout << cate;
    
}