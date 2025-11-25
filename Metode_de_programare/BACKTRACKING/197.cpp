#include<fstream>
using namespace std;

ifstream fin("combinari.in");
ofstream fout("combinari.out");

int x[16];
int n,p;
void afisare()
{
   
    for(int i=1;i<=p;i++)
        fout<<x[i]<<" ";
    fout<<'\n';
}

int Valid(int k)
{
    
    for(int i=1;i<k;i++)
        if(x[k]==x[i])
            return 0;
    for(int i=1;i<k;i++)
        if(x[k]<x[i])
            return 0;
    return 1;
}

void Backtracking(int k)
{
    if(k>p)
        afisare();
    else
    {
        
        for(int i=1;i<=n;i++)
        {
            x[k]=i;
            if(Valid(k))
                Backtracking(k+1);
        }
    }
}

int main()
{
    fin >> n >> p;
    Backtracking(1);
}