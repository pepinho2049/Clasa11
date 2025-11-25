#include <fstream>
using namespace std;
ifstream fin("bomboane.in");
ofstream fout("bomboane.out");
int n , bomb[1001] , cutie[1001][3] , sum , mini , maxi , imin , imax , ind;
int main()
{
    fin >> n;
    for (int i = 1; i <= n; i++)
        fin >> bomb[i] , sum += bomb[i];
    if(sum%n)fout << -1;
    else
    {
        sum /= n;
        int ok = 1;
        while(ok)
        {
            mini = 1000000;
            maxi = -1;
            for (int i = 1; i <= n; i++)
            {
                if(mini > bomb[i]) mini = bomb[i], imin = i;
                if(maxi < bomb[i]) maxi = bomb[i], imax = i;
            }
            if(mini == maxi) ok = 0;
            else
            {
                cutie[++ind][0] = imax;
                cutie[ind][1] = imin;
                cutie[ind][2] = sum - mini;
                bomb[imin] = sum;
                bomb[imax] = maxi - (sum - mini);
            }
        }
        fout << ind << '\n';
        for (int i = 1; i <= ind; i ++)
        {
            for (int j = 0; j < 3; j++) fout << cutie[i][j] << ' ';
            fout << '\n';
        }
    }
}