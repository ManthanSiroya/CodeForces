#include <bits/stdc++.h> //Problem-2230B
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
        ll i,ans,cnt1 = 0, cnt2 = 0;
        string s;
        cin >> s;
        for (i = 0; i < s.size(); i++)
        {
            if(s[i]%2)
                cnt1++;
        }
        ans=cnt1;
        for (i = 0; i < s.size(); i++)
        {
            if(s[i]=='2')
                cnt2++;
            if(s[i]%2)
                cnt1--;
            ans=max(ans,(cnt1+cnt2));
        }
 
        cout << s.size()-ans << endl;
    }
    return 0;
}