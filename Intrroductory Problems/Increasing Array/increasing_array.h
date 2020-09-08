#include <iostream>
#include <vector>

using namespace std;

namespace increasing_array {
    void solve() {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (size_t i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = 0;

        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                ans += a[i - 1] - a[i];
                a[i] = a[i - 1];
            }
        }

        cout << ans;
    }
};
