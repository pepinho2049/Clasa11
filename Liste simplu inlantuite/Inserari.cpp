#include <iostream>
/*Tema - sa se insereze dupa fiecare element par dublul sau*/
using namespace std;

struct nod{
    int data;
    nod* next;
}*v;

void add(nod * &v, int x){
    nod *c = new nod;
    c->data = x;
    c->next = v;
    v = c;
}

void addsf(nod*& v, int val){
    nod* c = new nod; /// creez un nou nod
    c->data = val;
    c->next = NULL;
    nod *d = v; /// nodul curent pornit de la inceputul listei
    while(d->next !=  NULL){
        d = d->next;
    }
    d->next = c;
}
void afisare(nod * &v){
    nod *c = v;
    while(c){
        cout << c->data << " ";
        c = c->next; /// ma deplasez pe urm nod
    }
}

void inserareDupa(nod*&v, int val, int dupacine){
    nod* c = new nod;
    c->data = val;
    nod* d = v;/// plecam de la inceput
    while(d->data != dupacine){
        d= d->next;

    }
    c->next = d->next; /// il punem pe c sa pastreze adresa ce o pastra nodul d
    d->next = c; ///il punem pe d sa pastreze adresa nodului c
}

void inserareInainte(nod*&v, int val, int inainteacui){
    nod* c = new nod;
    c->data = val;
    nod*d = v;
    while(d->next->data != inainteacui){/// cat timp valoarea urmatorului dupa d este dif de inainteacui
        d=d->next;/// parcurg lista
    }
    /// refac legatura
    c->next = d->next;
    d->next = c;
}

int main()
{
    int n, x;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        add(v, x);
    }
    afisare(v);
    cout << "\n";
    addsf(v, 2);
    afisare(v);
    cout <<"\n";
    int y;
    cin >> y;
    inserareDupa(v, 13, y);
    afisare(v);
    return 0;
}