#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n, minval = INT_MAX, maxval =  INT_MIN, imin, imax;
    cin >> n; 
    int a[n+1];
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    for(int i = 1; i<=n; i++){
        if(a[i] < minval){
            minval = a[i];
            imin = i;
        }
        if(a[i] > maxval){
            maxval = a[i];
            imax = i;
        }
    }
    cout << imin << ' ' << imax;
}