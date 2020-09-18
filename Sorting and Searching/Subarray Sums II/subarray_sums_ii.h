#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

namespace subarray_sum_i {
    void solve() {
        int n;
        long long x;

        cin >> n >> x;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long answer = 0;
        long long prefix_sum = 0;

        map<long long, long long> freq = { {0, 1} };

        for (int i = 0; i < n; i++) {
            prefix_sum += a[i];
            long long need = prefix_sum - x;
            answer += freq[need];
            freq[prefix_sum]++;
        }

        cout << answer;
    }
}
