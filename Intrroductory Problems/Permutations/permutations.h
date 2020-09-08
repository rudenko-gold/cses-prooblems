#include <iostream>

using namespace std;

namespace permutations {
    void solve() {
        int n;
        cin >> n;
        if (n == 2 || n == 3) {
            cout << "NO SOLUTION";
        } else if (n == 4) {
            cout << "3 1 4 2";
        } else {
            for (size_t i = 0; i < n; i += 2) {
                cout << (i + 1) << " ";
            }
            for (size_t i = 1; i < n; i += 2) {
                cout << (i + 1) << " ";
            }
        }
    }
}
