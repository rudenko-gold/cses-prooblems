#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

namespace missing_number {
    void solve() {
        int n;
        cin >> n;

        vector<int> a(n - 1);

        for (int i = 0; i < n - 1; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int expect = 1;

        for (auto& item : a) {
            if (expect != item) {
                break;
            } else {
                expect++;
            }
        }

        cout << expect;
    }
}v
