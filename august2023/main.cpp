#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("date.in");

int frecva[101], frecvb[101];


int main()
{
    int x, m, y, n;
    fin >> m >> n;
    for(int i=1; i <=m ; i++ ){
        fin >> x;
        frecva[x]++;
    }
    for(int i=1; i <=n ; i++ ){
        fin >> y;
        frecvb[y]++;
    }
    int cate = 0;
    for(int i = 0; i < 100; i++){
        if(frecva[i] && frecvb[i]){
            cate+=min(frecva[i], frecvb[i]);
        }
    }
    cout << cate;
    return 0;
}
