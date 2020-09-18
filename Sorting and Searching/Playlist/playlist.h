#include <map>
#include <iostream>
#include <vector>

using namespace std;

namespace playlist {
    void solve() {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<int, int> freq;

        int answer = 0;
        int l = 0;
        for (int r = 0; r < n; r++) {
            freq[a[r]]++;
            while (r - l + 1 > freq.size()) {
                freq[a[l]]--;
                if (freq[a[l]] == 0) {
                    freq.erase(a[l]);
                }
                l++;
            }
            answer = max(answer, r - l + 1);
        }

        cout << answer;
    }
}
