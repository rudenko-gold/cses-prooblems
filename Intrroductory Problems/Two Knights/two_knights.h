#include <iostream>
#include <vector>

using namespace std;

namespace two_knights {
    vector<long long> q = {
            0,
            0,
            6,
            28,
            96,
            252
    };

    void solve() {
        int sz;
        cin >> sz;
        for (long long n = 6; n <= sz; n++) {
            q.push_back(q.back() + ((n - 5) * ((n - 1) * (n - 1) - 4) + 2 * ((n - 1) * (n - 1) - 3) + 2 * ((n - 1) * (n - 1) - 2)) * 2 + ((n - 1) * (n - 1) - 2) + ((2 * n - 1) * (2 * n - 2)) / 2 - 2);
        }

        for (int i = 1; i <= sz; i++) {
            cout << q[i] << "\n";
        }
    }
}
