#include <iostream>
#include <vector>
using namespace std;

const int MAX_COLS = 50;

bool inside(int r, int c, int R, int C) {
    return r >= 0 && r < R && c >= 0 && c < C;
}

bool isValidChar(char ch) {
    return ch == '.' || ch == '#' || ch == 'S' || ch == 'E';
}

bool findPath(char maze[][MAX_COLS], int R, int C, int r, int c, vector<pair<int,int>>& path) {
    if (!inside(r, c, R, C)) return false;
    if (maze[r][c] == '#' || maze[r][c] == '*') return false;

    if (maze[r][c] == 'E') {
        path.push_back({r, c});
        return true;
    }

    bool isStart = (maze[r][c] == 'S');
    if (!isStart) maze[r][c] = '*';

    path.push_back({r, c});

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];
        if (findPath(maze, R, C, nr, nc, path))
            return true;
    }

    path.pop_back();
    if (!isStart) maze[r][c] = '.';
    return false;
}

int main() {
    int R, C;
    cout << "Enter maze dimensions (rows cols): ";
    cin >> R >> C;

    if (R <= 0 || C <= 0 || R > 50 || C > 50) {
        cout << "Invalid size.\n";
        return 0;
    }

    char maze[50][MAX_COLS];
    int startRow = -1, startCol = -1;
    int sCount = 0, eCount = 0;

    cout << "Enter maze row by row (# for walls , . for path , S for start , E for exit):\n";

    for (int i = 0; i < R; i++) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < C; j++) {
            char ch;
            cin >> ch;

            if (ch == 's') ch = 'S';
            if (ch == 'e') ch = 'E';

            if (!isValidChar(ch)) {
                cout << "Invalid character '" << ch << "'.\n";
                return 0;
            }

            maze[i][j] = ch;

            if (ch == 'S') {
                startRow = i;
                startCol = j;
                sCount++;
            }
            if (ch == 'E') eCount++;
        }
    }

    if (sCount != 1 || eCount != 1) {
        cout << "Maze must contain exactly one S and one E.\n";
        return 0;
    }

    cout << "Solving maze...\n";
    vector<pair<int,int>> path;
    bool ok = findPath(maze, R, C, startRow, startCol, path);

    if (ok) {
        cout << "Solution found!\n";
        cout << "Path length: " << path.size() << "\n";

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++)
                cout << maze[i][j];
            cout << "\n";
        }

        cout << "Path coordinates:\n";
        for (int i = 0; i < path.size(); i++) {
            cout << "(" << path[i].first << ", " << path[i].second << ")";
            if (i + 1 != path.size()) cout << " -> ";
        }
        cout << "\n";

    } else {
        cout << "No solution exists.\n";
    }

    return 0;
}
