// Winners never Quit!
#include <bits/stdc++.h> // Problem - 
using namespace std;
 
#define ll long long
#define pr pair<ll, ll>
#define pb push_back
#define fr(i, a, n) for (ll i = a; i < n; i++)
#define frr(i, n, a) for (ll i = n - 1; i >= a; i--)
 
bool isprime(ll n)
{
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
 
ll pow(ll a, ll b) // O(log(b))
{ 
    ll res = 1;
    while (b)
    {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
 
void solve()
{
    ll n;
    cin>>n;
    string s; cin>>s;
    ll o=0;
    fr(i,0,(s.size())){
        if(s[i]=='1') o++;
        if(s[i]=='0' && (o%2)==1) {
            cout<<"Alice\n";
            return;
        }
    }
    o=0;
    frr(i,(s.size()),0){
        if(s[i]=='0') o++;
        if(s[i]=='1' && (o%2)==1) {
            cout<<"Alice\n";
            return;
        }
    }
    cout<<"Bob\n";
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll T; cin >> T;
    while (T--)
    solve();
    return 0;
}