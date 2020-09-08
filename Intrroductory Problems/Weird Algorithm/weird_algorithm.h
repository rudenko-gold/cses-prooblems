#include <iostream>

using namespace std;
namespace  weird_algorithm {
    void solve() {
        long long n;
        cin >> n;

        while (n != 1) {
            cout << n << " ";
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n = (n * 3) + 1;
            }
        }
        cout << n;
    }
}
