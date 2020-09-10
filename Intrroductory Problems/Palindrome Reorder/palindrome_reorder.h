#include <iostream>
#include <string>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

namespace palindrome_reorder {
    void solve() {
        string s;
        cin >> s;

        map<char, int> freq;

        for (auto &ch : s) {
            freq[ch]++;
        }

        char mid_ch = 0;

        for (auto&[ch, cnt] : freq) {
            if (cnt % 2 == 1) {
                if (mid_ch == 0) {
                    mid_ch = ch;
                } else {
                    cout << "NO SOLUTION";
                    return;
                }
            }
        }

        string half = "";
        for (auto&[ch, cnt] : freq) {
            if (ch != mid_ch) {
                half += string(cnt / 2, ch);
            }
        }
        cout << half;

        if (mid_ch != 0) {
            cout << string(freq[mid_ch], mid_ch);
        }

        reverse(half.begin(), half.end());
        cout << half;
    }
}
