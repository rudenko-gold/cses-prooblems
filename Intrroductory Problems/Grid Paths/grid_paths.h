#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace grid_paths {
    int used[7][7];
    string path;

    int dfs(int i, int j, int idx, char prev_step) {
        if (idx == 48) {
            return 1;
        }
        if (i == 6 && j == 0) {
            return 0;
        }
        //cout << i << " " << j << endl;

        if (prev_step == 'L' and (j == 0 or used[i][j - 1]) and i > 0 and i < 6 and !used[i - 1][j] and !used[i + 1][j]) {
            return 0;
        }
        if (prev_step == 'R' and (j == 6 or used[i][j + 1]) and i > 0 and i < 6 and !used[i - 1][j] and !used[i + 1][j]) {
            return 0;
        }
        if (prev_step == 'U' and (i == 0 or used[i - 1][j]) and j > 0 and j < 6 and !used[i][j - 1] and !used[i][j + 1]) {
            return 0;
        }
        if (prev_step == 'D' and (i == 6 or used[i + 1][j]) and j > 0 and j < 6 and !used[i][j - 1] and !used[i][j + 1]) {
            return 0;
        }
        int ans = 0;
        if (path[idx] == '?') {
            int i_d[4] = {-1, 0, 1, 0};
            int j_d[4] = {0, -1, 0, 1};

            for (int k = 0; k < 4; k++) {
                int ii = i + i_d[k];
                int jj = j + j_d[k];

                if (ii < 0 || ii > 6 || jj < 0 || jj > 6) {
                    continue;
                }

                if (used[ii][jj]) {
                    continue;
                }
                used[i][j] = 1;
                ans += dfs(ii, jj, idx + 1, "ULDR"[k]);
                used[i][j] = 0;
            }
        } else if (path[idx] == 'L') {
            if (j > 0 && !used[i][j - 1]) {
                used[i][j] = 1;
                ans += dfs(i, j - 1, idx + 1, path[idx]);
                used[i][j] = 0;
            }
        } else if (path[idx] == 'R') {
            if (j < 6 && !used[i][j + 1]) {
                used[i][j] = 1;
                ans += dfs(i, j + 1, idx + 1, path[idx]);
                used[i][j] = 0;
            }
        } else if (path[idx] == 'U') {
            if (i > 0 && !used[i - 1][j]) {
                used[i][j] = 1;
                ans += dfs(i - 1, j, idx + 1, path[idx]);
                used[i][j] = 0;
            }
        } else if (path[idx] == 'D') {
            if (i < 6 && !used[i + 1][j]) {
                used[i][j] = 1;
                ans += dfs(i + 1, j, idx + 1, path[idx]);
                used[i][j] = 0;
            }
        }
        return ans;
    }

    void solve() {
        cin >> path;
        cout << dfs(0, 0, 0, 0);
    }
}
