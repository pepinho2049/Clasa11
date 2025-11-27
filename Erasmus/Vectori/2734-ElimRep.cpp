#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000]; 
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {      
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                for (int k = i; k < n - 1; k++)
                    a[k] = a[k + 1];
                n--;      
                i--;      
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
