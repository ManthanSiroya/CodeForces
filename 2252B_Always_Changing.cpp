// Winners never Quit!
#include <bits/stdc++.h> // Problem - 
using namespace std;
 
#define ll long long
#define pr pair<ll, ll>
#define pb push_back
#define ran(a) a.begin(), a.end()
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
    ll c0=0,c1=0;
    fr(i,0,n){
        if(s[i]=='0') c0++;
        else c1++;
    }
    if(abs(c0-c1)>=3) {
        cout<<"-1\n";
        return;
    }
    ll a=0,b=0,ans=0; 
    fr(i,1,n){
        if(s[i]==s[i-1]){
            if(s[i]=='0') a++;
            else b++;
        }
    }
    ll mn=min(a,b);
    a-=mn; b-=mn;
    ans+=2*mn;
    if(abs(a-b)==3){
        if(max(a,b)==a){
            if(s[0]=='1' && s[n-1]=='1') ans+=5;
            else{
                cout<<"-1\n";
                return;
            }
        }
        else{
            if(s[0]=='0' && s[n-1]=='0') ans+=5;
            else{
                cout<<"-1\n";
                return;
            }
        }
    }
    elif(abs(a-b)==2) {
        if(max(a,b)==a){
            if(s[0]=='1' || s[n-1]=='1') ans+=3;
            else{
                cout<<"-1\n";
                return;
            }
        }
        else{
            if(s[0]=='0' || s[n-1]=='0') ans+=3;
            else{
                cout<<"-1\n";
                return;
            }
        }
    }
    elif(abs(a-b)==1) ans+=1;
    cout<<(ans)<<endl;
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