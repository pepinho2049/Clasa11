/*
    Listele dublu inlantuite au proprietatea ca orice nod pastreaza adresa nodului anterior si posterior
*/
#include <iostream>

using namespace std;
///1.adaugare la inceputul listei

struct nod{
    int data;
    nod* prev;
    nod* next;
}*v, *sf;

void addFirst(nod *&v,nod*&sf, int val){
    nod*c = new nod;
    c->prev = NULL;
    c->data = val;
    if(v == NULL){///daca lista este vida
        c->next = NULL;
        v = sf = c;
    }
    else{
        c->next = v;
        v = c;
    }
}

///2.afisare elemente lista
void show(nod*&v){
    nod*c = v;
    while(c){
        cout << c->data << " ";
        c=c->next;
    }
    cout << endl;
}

///3.adauga un element  la sfarsitul listei
void addLast(nod* &v, nod* & sf, int val){
    nod* c = new nod;
    c->next = NULL;
    c->data = val;
    if(sf == NULL){
        c->prev = NULL;
        v = sf = c;
    }
    else{
        c->prev = sf;
        sf->next = c;
        sf = c;
    }
}

///4.adauga un element in int listei
void addIntNext(nod* &v, nod* & sf, int val, int valdupa){
    nod* c = new nod;
    c->data = val;
    nod*d = v;
    while(d->data != valdupa){
        d=d->next;
    }
    c->next = d->next;
    c->prev = d;
    d->next->prev = c;
    d->next = c;

}

///5.sterge un element
void stergere(nod* &v, nod* & sf, int val){
    nod* d = v;
    if(v->data == val){
        v = d->next;
        v->prev = NULL;
    }
    
    else if(sf->data == val){
        sf = d->prev;
        sf->next = NULL;
    }
    else{
        while(d->data != val) d=d->next;
        d->next->prev = d->prev;
        d->prev->next = d->next;
    }
    
    delete d;
}



int main(){
    int n, x;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        addLast(v,sf, x);
    }
    show(v);
    addIntNext(v,sf,100,3);
    show(v);
    stergere(v,sf, 1);
    show(v);
    cout<<endl;
}