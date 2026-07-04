// Winners never Quit!
#include <bits/stdc++.h> // Problem - 
using namespace std;
 
#define ll long long
#define pr pair<ll, ll>
#define pb push_back
#define fr(i, a, n) for (ll i = a; i < n; i++)
#define frr(i, a, n) for (ll i = n - 1; i >= a; i--)
#define elif else if
 
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
    vector<ll> v(n);
    fr(i,0,n){
        v[i]=s[i]-'0';
    } 
    ranges::sort(v);
    ll cnt=0,a=0,b=0,c=n-1;
    fr(i,0,n){
        if(v[i]<=5) b=i;
    }
    for(ll i=0 ; (n-(cnt*4)) > 3 ; i++){
        if(b==c) b--;
 
        if(a<n && v[a]==0){
            a++;
            b--;
            c-=2;
        }
        elif(a<n-1 && v[a]==1 && v[a+1]==1){
            a+=2;
            b--;
            c--;
        }
        else break;
 
        if((b-a)>=(-1) && c>=b) cnt++;
        else break;
    }
    cout<<cnt<<endl;
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