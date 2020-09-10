#include <iostream>

using namespace std;

namespace trailing_zeroz {
    void solve() {
        int n;
        cin >> n;
        int ans = 0;

        for (int i = 5; i <= n; i *= 5) {
            ans += n / i;
        }

        cout << ans;
    }
}
