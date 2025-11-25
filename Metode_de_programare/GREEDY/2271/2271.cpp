#include <iostream> 
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n, prod1 = 1, prod2 = 1;
    cin >> n;
    int a[n+1];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    prod1 = a[0] * a[1];
    prod2 = a[n-2] * a[n-1];
    cout << max(prod1, prod2);
}