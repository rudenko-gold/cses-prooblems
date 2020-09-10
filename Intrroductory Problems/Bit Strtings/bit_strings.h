#include <iostream>

using namespace std;

namespace bit_strings {
    void solve() {
        const long long mod = 1000000000 + 7;

        int n;
        cin >> n;

        long long ans = 1;

        for (int i = 1; i <= n; i++) {
            ans = (ans * 2) % mod;
        }

        cout << ans;
    }
}
