/*
───────────────────────────────────────────────────────────────────────────────
CE FACE ACEST PROGRAM?

Acest program sortează un șir de numere (un vector) folosind metoda QuickSort.
QuickSort este o metodă rapidă de sortare care funcționează așa:

1. Alege un element din mijlocul porțiunii de vector pe care vrem să o sortăm.
2. Împarte vectorul în două părți:
   - În stânga punem toate numerele mai mici decât pivotul.
   - În dreapta punem toate numerele mai mari decât pivotul.
3. Repetă pașii de mai sus pentru fiecare parte, până când totul e sortat.

───────────────────────────────────────────────────────────────────────────────
*/

#include <iostream>
using namespace std;
// Funcția care face sortarea
void QuickSort(int v[], int st, int dr) {
    if (st >= dr) return; // dacă zona are 1 sau 0 elemente, nu mai facem nimic

    int pivot = v[(st + dr) / 2]; // alegem un element din mijloc ca pivot
    int i = st;
    int j = dr;

    // Mutăm elementele mai mici în stânga și cele mai mari în dreapta
    while (i <= j) {
        while (v[i] < pivot) i++; // căutăm un element mai mare sau egal cu pivotul
        while (v[j] > pivot) j--; // căutăm un element mai mic sau egal cu pivotul

        if (i <= j) {
            swap(v[i], v[j]); // le schimbăm între ele
            i++;
            j--;
        }
    }

    // Sortăm recursiv partea stângă și partea dreaptă
    QuickSort(v, st, j);
    QuickSort(v, i, dr);
}

int main() {
    int n;
    cin >> n;
    int v[n+1];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    QuickSort(v, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}
