#include <bits/stdc++.h>
using namespace std;
 
bool isPalindrome(const string &s) {
    int l = 0, r = (int)s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        bool found = false;
 
        for (int mask = 0; mask < (1 << n) && !found; mask++) {
            string rem = "";
            vector<int> idx;
 
            bool ok = true;
            int last = '0';
 
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    if (s[i] < last) {
                        ok = false;
                        break;
                    }
                    last = s[i];
                    idx.push_back(i + 1);
                } else {
                    rem += s[i];
                }
            }
 
            if (!ok) continue;
            if (!isPalindrome(rem)) continue;
 
            cout << idx.size() << "\n";
            if (!idx.empty()) {
                for (int i = 0; i < (int)idx.size(); i++) {
                    if (i) cout << " ";
                    cout << idx[i];
                }
            }
            cout << "\n";
            found = true;
        }
 
        if (!found) {
            cout << -1 << "\n";
        }
    }
 
    return 0;
}