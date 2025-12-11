#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
void setcolor(int color){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  color);
}
void tree(int linie){
    if(linie < 8){
        for(int i = 1; i <= 15/2-(linie-1); i++){
            cout << " ";
        }
        for(int i = 1; i <= 2*linie+1; i++) cout << "*";
        cout<<"\n";
    }
    else {
        for(int i = 1; i <= 7; i++) cout <<" ";
        for(int i = 1; i <= 3; i++) cout <<'|';
    }
}

int main()
{
    int colors[] = {14, 13 , 12, 11, 10, 9, 8, 7, 6};
    for(int i = 0; i <9; i++){
        setcolor(colors[i]);
        tree(i);
        Sleep(500);
    }
    return 0;
}
