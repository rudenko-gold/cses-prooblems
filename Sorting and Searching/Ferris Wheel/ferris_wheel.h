#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

namespace ferris_wheel {
    void solve() {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        deque<int> d(a.begin(), a.end());
        int ans = 0;
        while (!d.empty()) {
            ans++;
            if (d.size() == 1) {
                break;
            } else {
                if (d.front() + d.back() <= x) {
                    d.pop_front();
                    d.pop_back();
                } else {
                    d.pop_back();
                }
            }
        }
        cout << ans;
    }
}

