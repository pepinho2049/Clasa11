#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>
#include <random>
#include <ctime>

struct NodeData {
    int x, y;
    float g, h, f;
    int px, py;
};

struct Node {
    NodeData Data;
    Node* Prior;
    Node* Next;
};

struct StackNode {
    int x, y;
    StackNode* Next;
};

Node* Head = nullptr;
Node* Tail = nullptr;
StackNode* TopStiva = nullptr;

void Push(StackNode*& Top, int x, int y) {
    StackNode* Nou = new StackNode;
    Nou->x = x;
    Nou->y = y;
    Nou->Next = Top;
    Top = Nou;
}

void Pop(StackNode*& Top) {
    if (Top == nullptr) return;
    StackNode* Temp = Top;
    Top = Top->Next;
    delete Temp;
}

void AdaugaSortat(Node*& H, Node*& T, NodeData Valoare) {
    Node* Nou = new Node;
    Nou->Data = Valoare;
    Nou->Next = nullptr;
    Nou->Prior = nullptr;

    if (H == nullptr) {
        H = T = Nou;
        return;
    }

    Node* Curr = H;
    while (Curr != nullptr && Curr->Data.f < Valoare.f) {
        Curr = Curr->Next;
    }

    if (Curr == H) {
        Nou->Next = H;
        H->Prior = Nou;
        H = Nou;
    } else if (Curr == nullptr) {
        T->Next = Nou;
        Nou->Prior = T;
        T = Nou;
    } else {
        Nou->Next = Curr;
        Nou->Prior = Curr->Prior;
        Curr->Prior->Next = Nou;
        Curr->Prior = Nou;
    }
}

void StergePrim(Node*& H, Node*& T) {
    if (H == nullptr) return;
    Node* Temp = H;
    if (H == T) {
        H = T = nullptr;
    } else {
        H = H->Next;
        H->Prior = nullptr;
    }
    delete Temp;
}

void CurataLista(Node*& H, Node*& T) {
    while (H != nullptr) {
        StergePrim(H, T);
    }
}

void GenereazaLabirint(int* Matrice, int R, int C) {
    for (int i = 0; i < R * C; i++) {
        Matrice[i] = 1;
    }

    Push(TopStiva, 1, 1);
    Matrice[1 * C + 1] = 0;

    std::mt19937 rng(static_cast<unsigned>(time(0)));

    while (TopStiva != nullptr) {
        int cx = TopStiva->x;
        int cy = TopStiva->y;

        int dx[] = {-2, 2, 0, 0};
        int dy[] = {0, 0, -2, 2};
        int p[] = {0, 1, 2, 3};

        for (int i = 0; i < 4; i++) {
            int r = rng() % 4;
            std::swap(p[i], p[r]);
        }

        bool Gasit = false;
        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[p[i]];
            int ny = cy + dy[p[i]];

            if (nx > 0 && nx < R - 1 && ny > 0 && ny < C - 1 && Matrice[nx * C + ny] == 1) {
                Matrice[nx * C + ny] = 0;
                Matrice[(cx + dx[p[i]] / 2) * C + (cy + dy[p[i]] / 2)] = 0;
                Push(TopStiva, nx, ny);
                Gasit = true;
                break;
            }
        }

        if (!Gasit) {
            Pop(TopStiva);
        }
    }
}

void Deseneaza(int* Matrice, int R, int C, int ax, int ay) {
    std::cout << "\033[H";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (i == ax && j == ay) {
                std::cout << "\033[1;92m⁕\033[0m";
            } else if (Matrice[i * C + j] == 1) {
                std::cout << "█";
            } else if (Matrice[i * C + j] == 8) {
                std::cout << "\033[1;91m█\033[0m";
            } else if (Matrice[i * C + j] == 2) {
                std::cout << "\033[34m█\033[0m";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

int main() {
    int R = 21;
    int C = 51;
    int Viteza = 30;

    int* Mat = nullptr;
    NodeData* Parinti = nullptr;

    bool GataMeniu = false;
    while (!GataMeniu) {
        std::cout << "\033[2J\033[H";
        std::cout << "========== CONFIGURARE DINAMICA ==========\n";
        std::cout << "1. Seteaza Dimensiuni (Linii x Coloane) [Actual: " << R << "x" << C << "]\n";
        std::cout << "2. Genereaza Labirint Nou\n";
        std::cout << "3. Seteaza Viteza (Actual: " << Viteza << "ms)\n";
        std::cout << "4. START Rezolvare\n";
        std::cout << "Optiune: ";
        int opt;
        std::cin >> opt;

        if (opt == 1) {
            std::cout << "Linii (impar): ";
            std::cin >> R;
            std::cout << "Coloane (impar): ";
            std::cin >> C;
            delete[] Mat;
            delete[] Parinti;
            Mat = new int[R * C];
            Parinti = new NodeData[R * C];
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
        } else if (opt == 2) {
            if (Mat == nullptr) {
                Mat = new int[R * C];
                Parinti = new NodeData[R * C];
            }
            GenereazaLabirint(Mat, R, C);
            std::cout << "\033[2J\033[H";
            Deseneaza(Mat, R, C, -1, -1);
            int ok;
            std::cin >> ok;
        } else if (opt == 3) {
            std::cin >> Viteza;
        } else if (opt == 4) {
            if (Mat != nullptr) GataMeniu = true;
        }
    }

    std::cout << "\033[2J\033[H\033[?25l";

    int sx = 1, sy = 1;
    int ex = R - 2, ey = C - 2;
    Mat[ex * C + ey] = 0;

    NodeData Start;
    Start.x = sx;
    Start.y = sy;
    Start.g = 0;
    Start.h = std::sqrt(std::pow(sx - ex, 2) + std::pow(sy - ey, 2));
    Start.f = Start.g + Start.h;
    Start.px = -1;
    Start.py = -1;

    AdaugaSortat(Head, Tail, Start);

    bool Success = false;
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    while (Head != nullptr) {
        NodeData curr = Head->Data;
        StergePrim(Head, Tail);

        if (Mat[curr.x * C + curr.y] == 2) continue;

        Parinti[curr.x * C + curr.y] = curr;

        if (curr.x == ex && curr.y == ey) {
            Success = true;
            break;
        }

        Mat[curr.x * C + curr.y] = 2;
        static int frame = 0;
        if (frame++ % 2 == 0) {
            Deseneaza(Mat, R, C, curr.x, curr.y);
            std::this_thread::sleep_for(std::chrono::milliseconds(Viteza));
        }

        for (int i = 0; i < 4; i++) {
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];
            if (nx >= 0 && nx < R && ny >= 0 && ny < C && Mat[nx * C + ny] == 0) {
                NodeData v;
                v.x = nx;
                v.y = ny;
                v.g = curr.g + 1;
                v.h = std::sqrt(std::pow(nx - ex, 2) + std::pow(ny - ey, 2));
                v.f = v.g + v.h;
                v.px = curr.x;
                v.py = curr.y;
                AdaugaSortat(Head, Tail, v);
            }
        }
    }

    if (Success) {
        int cx = ex, cy = ey;
        while (cx != -1) {
            Mat[cx * C + cy] = 8;
            NodeData t = Parinti[cx * C + cy];
            cx = t.px;
            cy = t.py;
            Deseneaza(Mat, R, C, -1, -1);
            std::this_thread::sleep_for(std::chrono::milliseconds(30));
        }
        std::cout << "\n\033[1;32mSOLUTIA A FOST GASITA!\033[0m\n";
    }

    return 0;
}
