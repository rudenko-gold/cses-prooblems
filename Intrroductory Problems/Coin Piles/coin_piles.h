#include <iostream>

using namespace std;

namespace coin_piles {
    void solve() {
        int t;
        cin >> t;

        while (t--) {
            int a, b;
            cin >> a >> b;

            if ((2 * b - a) % 3 == 0) {
                int y = (2 * b - a) / 3;
                int x = b - 2 * y;

                if (y >= 0 && x >= 0) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            } else {
                cout << "NO\n";
            }
        }
    }
}
