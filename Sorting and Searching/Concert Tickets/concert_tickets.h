#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

namespace concert_tickets {
    void solve() {
        int n, m;
        cin >> n >> m;
        vector<int> t(m);

        multiset<int> s;

        for (int item, i = 0; i < n; ++i) {
            cin >> item;
            s.insert(-item);
        }

        for (int item, i = 0; i < m; i++) {
            cin >> item;
            if (s.empty()) {
                cout << "-1\n";
            } else {
                auto it = s.lower_bound(-item);

                if (it == s.end()) {
                    cout << "-1\n";
                } else {
                    cout << *it * -1 << "\n";
                    s.erase(it);
                }
            }
        }
    }
}
