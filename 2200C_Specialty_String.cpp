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
        string s;
        cin >> s;
        vector<char> v;
        for (char c : s) {
            if (!v.empty() && v.back() == c)
                v.pop_back();
            else
                v.push_back(c);
        }
        cout << (v.empty() ? "YES" : "NO") << '\n';
    }
 
    return 0;
}