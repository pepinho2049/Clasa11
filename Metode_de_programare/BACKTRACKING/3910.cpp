#include<iostream>
using namespace std;

int a,b,n,p,x[9];

void Afisare(int k)
{
    for(int i=1;i<=k;i++)
        cout<<x[i]<<" ";
    cout<<"\n";
}

int Valid(int k)
{
    for(int i=1;i<k;i++)
        if(x[i]==x[k])
            return 0;
    return 1;
}
bool solutie(int k)
{
    if(k==p)
        return 1;
    return 0;
}
void Backtracking(int k)
{
    if(k>p)
        Afisare(k);
    else
    {
        for(int i=a;i<=b;i++)
        {
            x[k]=i;
            if(Valid(k))
                if(solutie(k))
                    Afisare(k);
                else
                Backtracking(k+1);
        }
    }
}

int main()
{
    cin>>a>>b>>p;
    n=b-a+1;
    Backtracking(1);
    return 0;
}