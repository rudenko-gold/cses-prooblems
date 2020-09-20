#include <vector>
#include <iostream>

using namespace std;

namespace minimizing_coins {
    void solve() {
        int n, x;
        cin >> n >> x;

        vector<long long> costs(n);

        for (int i = 0; i < n; i++) {
            cin >> costs[i];
        }

        vector<long long> dp(x + 1, numeric_limits<long long>::max());
        dp[0] = 0;

        for (int i = 1; i <= x; i++) {
            for (auto cost : costs) {
                if (i >= cost && dp[i - cost] != numeric_limits<long long>::max()) {
                    dp[i] = min(dp[i], dp[i - cost] + 1);
                }
            }
        }

        if (dp[x] == numeric_limits<long long>::max()) {
            cout << -1;
        } else {
            cout << dp[x];
        }
    }
}
