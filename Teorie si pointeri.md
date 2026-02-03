# Liste Liniare

* Paine        [2]
* Cartof       [5]
* Ulei         [6]
* Fructe       [3]
* Suc          [7]
* Dulciuri     [1]
* Piscoturi    [4]

1        2          3       4         5
paine,4; carotfi,3; ulei,5; fructe,7, suc,-1;

6           7
dulciuri,1; piscoturi,2;

Vom implementa listele liniare folosind **alocarea dinamica a memoriei**

O variabila de tip **pointer** reprezinta o variabila care memoreaza adresa de memorie a unei alte variabile.

### Exemplu [1]
```cpp
#include <iostream>

int main (void) {
    int x = 67, *p;
    int y;

    p = &x; // lui p ii dau adresa variabilei in memorie

    std::cout << "valoare variabila: " << x << " \nadresa in memorie: " << p << "\n";

    y = *p; // ii dam lui y valoarea variabilei a carei adresa o memoreaza p

    std::cout << "valoare a carei adresa memoreaza p: " << y << "\n";

    return false;
}
```

Alocarea **dinamica** a memoriei presupune **alocarea unui spatiu pentru variabile in momentul utilizarii acestora** (cu operatoriu new) si eliberarea spatiului din memorie in momentul in care nu mai folosim o variabila (cu operatorul delete)

### Exemplu [2]
```cpp
#include <iostream>

int main (void) {
    int *p = new int; // el ne va aloca spatiu pt o var de tip int
    
    /// pt atribuire pot sa fac si asa: *p = new int(7); 
    *p = 7;

    std::cout << *p << "\n";

    delete p; // nu o mai folosim, eliberam spatiul din memorie

    std::cout << *p << "\n";
    return false;
}
```

O lista **liniara** alocata **simplu inlantuit** reprerezinta o lista in care fiecare element reprezinta un nod care memoreaza o informatie(o valoare) si adresa urmatorului nod din lista.

```cpp
```