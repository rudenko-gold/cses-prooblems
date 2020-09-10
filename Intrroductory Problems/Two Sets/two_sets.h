#include <iostream>
#include <vector>

using namespace std;

namespace two_sets {
    void solve() {
        long long n;
        cin >> n;

        if (n % 4 == 0) {
            cout << "YES\n";
            cout << n / 2<< endl;
            for (int i = 0; i < n / 2; i += 2) {
                cout << i + 1 << " " << n - 1 - i + 1 << " ";
            }
            cout << endl << n / 2 << endl;
            for (int i = 1; i < n / 2; i += 2) {
                cout << i + 1 << " " << n - 1 - i + 1 << " ";
            }
        } else if (n % 4 == 3) {
            cout << "YES\n";
            vector<int> a = {1, 2}, b = {3};

            for (int i = 3; i < n; i += 4) {
                a.push_back(i + 2);
                a.push_back(i + 3);
                b.push_back(i + 1);
                b.push_back(i + 4);
            }

            cout << a.size() << endl;
            for (auto item : a) {
                cout << item << " ";
            }
            cout << endl;
            cout << b.size() << endl;
            for (auto item : b) {
                cout << item << " ";
            }
        } else {
            cout << "NO";
        }
    }
}
