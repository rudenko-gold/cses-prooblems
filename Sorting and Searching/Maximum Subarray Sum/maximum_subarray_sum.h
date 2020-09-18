#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

namespace maximum_subarray_sum {
    void solve() {
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long answer = numeric_limits<long long>::min();
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            answer = max(sum, answer);
            sum = max(0ll, sum);
        }

        cout << answer;
    }
}
