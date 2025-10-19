#include <bits/stdc++.h>
using namespace std;
int dr[4] = {-1, 1, 0, 0}; // U D L R
int dc[4] = {0, 0, -1, 1};
char moves[4] = {'U','D','L','R'};
string s;

void solve(int r, int c, int i, int &countpath, vector<vector<int>> &vis) {
    if (r == 6 && c == 0) {
        if (i == 48) countpath++;
        return;
    }
    if (i >= 48) return;
    
    vis[r][c] = true;
    
    char move = s[i];
    
    // If we have a specific move, only try that direction
    if (move != '?') {
        for (int d = 0; d < 4; d++) {
            if (move == moves[d]) {
                int nr = r + dr[d];
                int nc = c + dc[d];
                if (nr >= 0 && nc >= 0 && nr < 7 && nc < 7 && !vis[nr][nc]) {
                    // Check if moving here would create a corridor
                    bool wouldCreateCorridor = false;
                    
                    // Vertical corridor check
                    if (nr > 0 && nr < 6 && nc > 0 && nc < 6) {
                        if ((!vis[nr-1][nc] && !vis[nr+1][nc] && (vis[nr][nc-1] || nc-1 < 0 || vis[nr][nc-1]) && (vis[nr][nc+1] || nc+1 > 6 || vis[nr][nc+1]))) {
                            wouldCreateCorridor = true;
                        }
                        // Horizontal corridor check
                        if ((!vis[nr][nc-1] && !vis[nr][nc+1] && (vis[nr-1][nc] || nr-1 < 0 || vis[nr-1][nc]) && (vis[nr+1][nc] || nr+1 > 6 || vis[nr+1][nc]))) {
                            wouldCreateCorridor = true;
                        }
                    }
                    
                    if (!wouldCreateCorridor) {
                        solve(nr, nc, i + 1, countpath, vis);
                    }
                }
                break;
            }
        }
    } else {
        // Try all 4 directions
        for (int d = 0; d < 4; d++) {
            int nr = r + dr[d];
            int nc = c + dc[d];
            if (nr >= 0 && nc >= 0 && nr < 7 && nc < 7 && !vis[nr][nc]) {
                // Pruning: if moving would separate unvisited area
                int unvisitedNeighbors = 0;
                for (int dd = 0; dd < 4; dd++) {
                    int nnr = nr + dr[dd];
                    int nnc = nc + dc[dd];
                    if (nnr >= 0 && nnc >= 0 && nnr < 7 && nnc < 7 && !vis[nnr][nnc]) {
                        unvisitedNeighbors++;
                    }
                }
                
                // Check vertical corridor
                if (nr > 0 && nr < 6) {
                    if (!vis[nr-1][nc] && !vis[nr+1][nc] && 
                        ((nc == 0) || vis[nr][nc-1]) && 
                        ((nc == 6) || vis[nr][nc+1])) {
                        continue;
                    }
                }
                
                // Check horizontal corridor
                if (nc > 0 && nc < 6) {
                    if (!vis[nr][nc-1] && !vis[nr][nc+1] && 
                        ((nr == 0) || vis[nr-1][nc]) && 
                        ((nr == 6) || vis[nr+1][nc])) {
                        continue;
                    }
                }
                
                solve(nr, nc, i + 1, countpath, vis);
            }
        }
    }
    
    vis[r][c] = false;
}

int main() {
    cin >> s;
    vector<vector<int>> vis(7, vector<int>(7, 0));
    int countpath = 0;
    solve(0, 0, 0, countpath, vis);
    cout << countpath << endl;
    return 0;
}