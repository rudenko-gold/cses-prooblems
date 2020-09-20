#include <vector>
#include <iostream>

using namespace std;

namespace dice_combinations {
    const long long mod = 1000000000 + 7;

    void solve() {
        int n;
        cin >> n;

        vector<long long> dp(n + 1, 0);

        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            for (int j = max(0, i - 6); j < i; j++) {
                dp[i] = (dp[i] + dp[j]) % mod;
            }
        }

        cout << dp[n];
    }
}
