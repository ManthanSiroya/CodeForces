// Winners never Quit!
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        vector<string> g(8);
        for (int i = 0; i < 8; i++)
            cin >> g[i];
 
        bool red = false;
 
        // Check if there is a completely red row
        for (int i = 0; i < 8; i++) {
            bool ok = true;
            for (int j = 0; j < 8; j++) {
                if (g[i][j] != 'R') {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                red = true;
                break;
            }
        }
 
        cout << (red ? 'R' : 'B') << '\n';
    }
 
    return 0;
}