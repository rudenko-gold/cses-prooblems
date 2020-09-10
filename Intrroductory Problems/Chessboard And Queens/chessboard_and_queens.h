#include <iostream>

using namespace std;

namespace chessboard_and_queens {
    const int table_size = 8;

    int ans = 0;
    int col[table_size];
    int diag1[2 * table_size - 1];
    int diag2[2 * table_size - 1];

    char table[table_size][table_size];

    void search(int i) {
        if (i == table_size) {
            ans++;
        } else {
            for (int j = 0; j < table_size; ++j) {
                if (col[j] || diag1[i + j] || diag2[j - i + table_size - 1] || table[i][j] == '*') {
                    continue;
                }

                col[j] = diag1[i + j] = diag2[j - i + table_size - 1] = 1;
                search(i + 1);
                col[j] = diag1[i + j] = diag2[j - i + table_size - 1] = 0;
            }
        }
    }

    void solve() {
        for (int i = 0; i < table_size; i++) {
            for (int j = 0; j < table_size; j++) {
                cin >> table[i][j];
            }
        }

        search(0);

        cout << ans;
    }
}
