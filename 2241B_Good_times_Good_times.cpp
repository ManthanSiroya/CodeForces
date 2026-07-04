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
        ll n, i;
        cin >> n;
        string s = to_string(n);
        ll ans=1,x=s.size();
        while(x--){
            ans*=10;
        }
        cout << (ans+1) << endl;
    }
    return 0;   
}