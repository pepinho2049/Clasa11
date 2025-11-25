#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("eureni.in");
ofstream fout("eureni.out");

int i,e,k,n,l,d;
int S;
double a[12];

int main()
{

    fin >> S >> n >> e;

    k=n;

    for (i=1;i<=n+1;i++)
    {
        a[i]=pow(e,k);
        k--;
    }

    i=1;

    while(S!=0)
    {
        if(a[i]<=S)
        {
            d++;
            l++;
            S-=a[i];
            if(S==0) fout<< a[i] << " " << l << endl;
        }
        else
        {
            if (l!=0) fout << a[i] << " " << l << endl;
            l=0;
            i++;
        }
    }

    fout << d << endl;

    return 0;
}