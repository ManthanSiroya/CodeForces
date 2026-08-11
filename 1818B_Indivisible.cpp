#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        // n = 1: no l < r exists
        if (n == 1) {
            cout << 1 << '\n';
        }
        // Odd n > 1: impossible
        else if (n % 2 == 1) {
            cout << -1 << '\n';
        }
        // Even n: swap adjacent elements
        else {
            for (int i = 1; i <= n; i += 2) {
                cout << i + 1 << ' ' << i;
                if (i + 1 < n) cout << ' ';
            }
            cout << '\n';
        }
    }
 
    return 0;
}