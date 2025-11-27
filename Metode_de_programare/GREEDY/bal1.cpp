#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("bal.in");
ofstream fout("bal.out");
int main()
{
    int n,m;
    
    fin>>n>>m;
    int f[n+1],b[m+1];
    for(int i=0;i<n;++i)
        fin>>f[i];
    for(int i=0;i<m;++i)
        fin>>b[i];
    sort(f,f+n);
    sort(b,b+m);
    int i=0,j=0,p=0;
    while(i<n&&j<m)
        if(f[i]<=b[j])
            p++,i++,j++;
        else
            j++;
    
    fout<<p;
    return 0;
}