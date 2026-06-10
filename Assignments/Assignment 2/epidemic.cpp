
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int W, H, I;
    double p, w;
    const int R = 5;   
    const int T = 30;  

    cout << "Enter grid width and height: ";
    cin >> W >> H;

    cout << "Enter initial number of infected individuals: ";
    cin >> I;

    cout << "Enter infection probability p (0..1): ";
    cin >> p;

    cout << "Enter worsening probability w (0..1): ";
    cin >> w;

    
    int grid[100][100] = {0};
    int days[100][100] = {0};

    
    for (int k = 0; k < I; k++) {
        int x, y;
        do {
            x = rand() % H;
            y = rand() % W;
        } while (grid[x][y] != 0);

        grid[x][y] = (rand() % 3) + 1; 
        days[x][y] = 0;
    }

    
    cout << "\nInitial grid state:\n";
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == 0) cout << '.';
            else if (grid[i][j] >= 1 && grid[i][j] <= 9) cout << grid[i][j];
            else if (grid[i][j] == -1) cout << 'R';
            else if (grid[i][j] == 10) cout << 'X';
        }
        cout << endl;
    }

    
    for (int day = 1; day <= T; day++) {
        int next[100][100];
        int nextDays[100][100];

       
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                next[i][j] = grid[i][j];
                nextDays[i][j] = days[i][j];
            }
        }

       
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                int state = grid[i][j];

                
                if (state == 10 || state == -1) continue;

                
                if (state == 0) {
                    int maxInf = 0;
                    int dirs[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
                    for (int d = 0; d < 4; d++) {
                        int ni = i + dirs[d][0];
                        int nj = j + dirs[d][1];
                        if (ni >= 0 && ni < H && nj >= 0 && nj < W) {
                            int nstate = grid[ni][nj];
                            if (nstate >= 1 && nstate <= 9 && nstate > maxInf)
                                maxInf = nstate;
                        }
                    }
                    if (maxInf > 0 && (rand() / (double)RAND_MAX) <= p) {
                        int newSeverity = (rand() % maxInf) + 1;
                        next[i][j] = newSeverity;
                        nextDays[i][j] = 0;
                    }
                }

                else if (state >= 1 && state <= 9) {
                    double prob = rand() / (double)RAND_MAX;

                   
                    if (prob <= w) {
                        if (state >= 9)
                            next[i][j] = 10; 
                        else
                            next[i][j] = state + 1; 
                    } else {
                        if (state > 1)
                            next[i][j] = state - 1; 
                    }

                    nextDays[i][j] = days[i][j] + 1;

                   
                    if (nextDays[i][j] >= R && next[i][j] != 10 && next[i][j] <= 4) {
                        next[i][j] = -1; 
                        nextDays[i][j] = 0;
                    }
                }
            }
        }

       
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                grid[i][j] = next[i][j];
                days[i][j] = nextDays[i][j];
            }
        }

        int healthy = 0, infected = 0, recovered = 0, dead = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (grid[i][j] == 0) healthy++;
                else if (grid[i][j] >= 1 && grid[i][j] <= 9) infected++;
                else if (grid[i][j] == -1) recovered++;
                else if (grid[i][j] == 10) dead++;
            }
        }

        cout << "Day " << day << ": Healthy=" << healthy
             << " Infected=" << infected
             << " Recovered=" << recovered
             << " Dead=" << dead << endl;
    }

   
    cout << "\nFinal grid state:\n";
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == 0) cout << '.';
            else if (grid[i][j] >= 1 && grid[i][j] <= 9) cout << grid[i][j];
            else if (grid[i][j] == -1) cout << 'R';
            else if (grid[i][j] == 10) cout << 'X';
        }
        cout << endl;
    }

    return 0;
}
