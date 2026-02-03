#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head = nullptr;

void adaugare(Node*& head, int v){
    Node* nou = new Node;
    nou->data = v;
    nou->next= head;
    head = nou;
}
void afisare(Node* start){
    Node* curent = start;
    while(curent != nullptr){
        cout << curent->data << " "<<"\n";
        curent = curent->next;
    }

}
Node* reverseList(Node* v){
    Node* inv = nullptr;
    Node* curent = v;
    while(curent!=nullptr){
        adaugare(inv, curent->data);
        curent = curent->next;
    }
    return inv;
}
int main(){
    int n;
    do{
        cin >> n;
        if(n!=0){
            adaugare(head, n);
        }
    }while(n!=0);
    cout << "Lista initiala: "<<"\n";
    afisare(head);
    Node* reversed = reverseList(head);
    cout << "Lista inversata: "<<"\n";
    afisare(reversed);
}
