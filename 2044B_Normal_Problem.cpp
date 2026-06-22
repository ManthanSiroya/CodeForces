#include <bits/stdc++.h> //Problem-
using namespace std;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == 'p')
                cout << 'q';
            else if (s[i] == 'q')
                cout << 'p';
            else
                cout << 'w';
        }
        cout << endl;
    }
    return 0;
}