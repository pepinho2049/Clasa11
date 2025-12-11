#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void setcolor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void reset_cursor() {
    COORD cursorPosition;
    cursorPosition.X = 0;
    cursorPosition.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
}

void tree(int line, int max_lines) {
    const int COLOR_GREEN = 10;
    const int COLOR_BROWN = 6;
    const int COLOR_YELLOW = 14;

    const int ORNAMENT_COLORS[] = {9, 11, 12, 13, 14, 15};
    const int NUM_ORNAMENT_COLORS = sizeof(ORNAMENT_COLORS) / sizeof(ORNAMENT_COLORS[0]);

    int max_width = 2 * (max_lines - 1) + 1;

    if (line < max_lines) {
        int spaces = (max_width / 2) - line;
        for (int i = 0; i < spaces; i++) {
            cout << " ";
        }

        int chars_on_line = 2 * line + 1;
        bool is_top_star = (line == 0);

        setcolor(COLOR_GREEN);

        for (int i = 0; i < chars_on_line; i++) {

            if (is_top_star && i == 0) {
                setcolor(COLOR_YELLOW);
                cout << "^";
                setcolor(COLOR_GREEN);
                continue;
            }

            if (rand() % 3 == 0) {
                int ornament_color_index = rand() % NUM_ORNAMENT_COLORS;
                int ornament_color = ORNAMENT_COLORS[ornament_color_index];

                setcolor(ornament_color);
                cout << "acsinia";

                setcolor(COLOR_GREEN);
            } else {
                cout << "*";
            }
        }
        cout << "\n";
    }
    else {
        int trunk_width = 3;
        int trunk_indent = (max_width - trunk_width) / 2;

        for (int i = 0; i < trunk_indent; i++) {
            cout << " ";
        }

        setcolor(COLOR_BROWN);
        for (int i = 0; i < trunk_width; i++) {
            cout << "|";
        }
        cout << "\n";
    }
}

int main() {
    srand(time(0));

    const int TREE_HEIGHT = 15;
    const int TRUNK_HEIGHT = 3;

    while (true) {
        for (int i = 0; i < TREE_HEIGHT; i++) {
            tree(i, TREE_HEIGHT);
        }
        for (int i = 0; i < TRUNK_HEIGHT; i++) {
            tree(TREE_HEIGHT, TREE_HEIGHT);
        }

        Sleep(500);

        reset_cursor();
    }

    setcolor(15);
    return 0;
}
