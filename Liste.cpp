/*
    Tema:

    fiind data o lista liniara simplu inlantuita cu adresa de inceput 
    v sa se creeze si sa afiseze o alta lista liniara simplu inlantuita
    in care elementele sa fie memorate in ordine inversa

*/

#include <iostream>

struct Specific {
    int Informatie;
};

struct Node {
    Specific Data; /* Valoarea nodului*/
    
    Node* Next; // Pointer catre urmatorul nod
};

Node* Head = nullptr; /// Adresa primului nod din lista

void Add(Node*& Head, int info) {
    Node* CurrentNode = new Node;/// Alocam memorie pentru un nou nod

    CurrentNode->Data.Informatie = info;/// Setam valoarea nodului
    CurrentNode->Next = Head;/// Setam pointerul Next al noului nod catre vechiul Head

    Head = CurrentNode;/// Actualizam Head pentru a indica noul nod
}

void Show(Node* StarterNode) {/// Afisam lista incepand de la nodul dat ca parametru
    Node* CurrentNode = StarterNode;/// Pornim de la nodul dat ca parametru

    while (CurrentNode != nullptr) {/// Cat timp nu am ajuns la finalul listei
        
        std::cout << CurrentNode->Data.Informatie << "\n";/// Afisam valoarea nodului curent
        
        CurrentNode = CurrentNode->Next;/// Trecem la urmatorul nod
    }
}

int main() {
    int Number;

    do {
        std::cout << "Number: "; std::cin >> Number;/// Citim un numar de la tastatura

        if (Number != 0) {/// Daca numarul este diferit de 0
            Add(Head, Number); /// Adaugam numarul in lista
        }
    } while (Number != 0);

    Show(Head);/// Afisam lista

    return 0;
}
