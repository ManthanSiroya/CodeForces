#include <bits/stdc++.h> //Problem-
using namespace std;
#define ll long long
 
// bool comparator(string s1, string s2)
// {
//     if (s1.length() > s2.length())
//         return true;
//     if (s1.length() < s2.length())
//         return false;
 
//     if (s1[s1.length() - 1] > s2[s2.length() - 1])
//         return true;
//     else
//         return false;
// }
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, j;
        cin >> n;
        string s;
        cin >> s;
        set<string> l;
        for (i = 0; i < n; i++)
        {
            string cur = "";
            for (int j = i; j < min(n, i + 5); j++)
            {
                cur += s[j];
                l.insert(cur);
            }
        }
        // sort(l.begin(),l.end(),comparator);
        // ll a = 0;
        // string b = "";
        // for (auto x : l)
        // {
        //     ll y = x.size(), z = 0;
        //     for (i = 1; i <= y; i++)
        //     {
        //         z += pow(26, (i - 1)) * (((ll)(x[y - i]) - 'a') + 1);
        //         if ((i - 1) == 0)
        //             z--;
        //     }
        //     if (z != a)
        //         break;
        //     b = x;
        //     a++;
        // }
        // ll c = b.size() - 1;
        // while (c >= 0 && b[c] == 'z')
        // {
        //     b[c] = 'a';
        //     c--;
        // }
        // if (c >= 0)
        //     b[c]++;
        // else
        //     b = 'a' + b;
 
        // cout << b << endl;
 
        string ans = "";
        for (char a = 'a'; a <= 'z'; a++)
        {
            string t;
            t += a;
            if (!l.count(t))
            {
                ans = t;
                break;
            }
        }
        if (ans != "")
        {
            cout << ans << endl;
            continue;
        }
        for (char a = 'a'; a <= 'z'; a++)
        {
            for (char b = 'a'; b <= 'z'; b++)
            {
                string t;
                t += a;
                t += b;
                if (!l.count(t))
                {
                    ans = t;
                    break;
                }
            }
            if (ans != "")
                break;
        }
        if (ans != "")
        {
            cout << ans << endl;
            continue;
        }
        for (char a = 'a'; a <= 'z'; a++)
        {
            for (char b = 'a'; b <= 'z'; b++)
            {
                for (char c = 'a'; c <= 'z'; c++)
                {
                    string t;
                    t += a;
                    t += b;
                    t += c;
                    if (!l.count(t))
                    {
                        ans = t;
                        break;
                    }
                }
                if (ans != "")
                    break;
            }
            if (ans != "")
                break;
        }
        if (ans != "")
            cout << ans << endl;
    }
    return 0;
}