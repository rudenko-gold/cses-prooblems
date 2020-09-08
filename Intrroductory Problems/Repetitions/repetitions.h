#include <iostream>
#include <string>

using namespace std;

namespace repetitions {
    void solve() {
        string s;
        cin >> s;

        char last = s[0];
        int cnt = 1;
        int ans = 1;

        for (size_t i = 1; i < s.size(); i++) {
            if (last == s[i]) {
                cnt++;
            } else {
                last = s[i];
                cnt = 1;
            }
            ans = max(ans, cnt);
        }

        cout << ans;
    }
}
