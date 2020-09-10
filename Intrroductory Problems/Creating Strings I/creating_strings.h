#include <iostream>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

namespace creating_strings {
    void solve() {
        string s;

        cin >> s;

        set<string> ans;

        sort(s.begin(), s.end());

        ans.insert(s);

        while (next_permutation(s.begin(), s.end())) {
            ans.insert(s);
        }

        cout << ans.size() << "\n";

        for (auto item : ans) {
            cout << item << "\n";
        }
    }
}
