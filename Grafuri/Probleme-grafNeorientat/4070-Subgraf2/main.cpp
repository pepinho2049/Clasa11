#include <iostream>

using namespace std;

int main()
{
    int n, m, k, i, j, cateeste =0;
    cin >> n >> m >> k;
    for(int p = 1; p <= m; p++){
        cin >> i >> j;
        if(i%k!=0 && j%k!=0) cateeste++;
    }
    cout << cateeste;
    return 0;
}
