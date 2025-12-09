#include <iostream>

using namespace std;

int main()
{
    int n, k, m[101][101];
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n; j++){
            m[i][j] = 1;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n; j++){
            if(i % k == j % k){
                m[i][j] = 0;
                m[j][i] = 0;
            }

        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n; j++){
            cout << m[i][j] <<" ";
        }
        cout<<"\n";
    }
    return 0;
}
