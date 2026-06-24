#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll w, h, d, n;
    cin >> w >> h >> d;
    cin >> n;
 
    ll wp = gcd(n, w);
    ll nw = n / wp;
    ll hp = gcd(nw, h);
    ll nh = nw / hp;
    ll dp = gcd(nh, d);
    ll nd = nh / dp;
 
    if (nd != 1)
        cout << -1 << '\n';
    else
        cout << wp - 1 << " " << hp - 1 << " " << dp - 1 << '\n';
 
    // Jab dimag nhi chalta tab wali approach
 
    // ll w, h, d, n;
    // cin >> w >> h >> d >> n;
    // if ((w * h * d) % n != 0)
    // {
    //     cout << "-1\n";
    //     return 0;
    // }
    // vector<ll> v;
    // ll x = (w * h * d) / n, ans = 0, y, z;
    // ll a = 1, b = x;
    // for (ll i = 2; i * i <= x; i++)
    // {
    //     if (x % i == 0)
    //         v.push_back(i);
    // }
    // sort(v.begin(), v.end());
    // for (ll i = 0; i < v.size(); i++)
    // {
    //     a = v[i], b = x / v[i];
    //     if ((w % a == 0 && h % b == 0))
    //     {
    //         y = w;
    //         z = h;
    //         break;
    //     }
    //     if ((w % a == 0 && d % b == 0))
    //     {
    //         y = w;
    //         z = d;
    //         break;
    //     }
    //     if ((h % a == 0 && w % b == 0))
    //     {
    //         y = h;
    //         z = w;
    //         break;
    //     }
    //     if ((h % a == 0 && d % b == 0))
    //     {
    //         y = h;
    //         z = d;
    //         break;
    //     }
    //     if ((d % a == 0 && w % b == 0))
    //     {
    //         y = d;
    //         z = w;
    //         break;
    //     }
    //     if ((d % a == 0 && h % b == 0))
    //     {
    //         y = d;
    //         z = h;
    //         break;
    //     }
    // }
    // if(y==w) cout<<a<<" ";
    // else if(z==w) cout<<b<<" ";
    // else cout<<"1 ";
 
    // if(y==h) cout<<a<<" ";
    // else if(z==h) cout<<b<<" ";
    // else cout<<"1 ";
 
    // if(y==d) cout<<a<<" ";
    // else if(z==d) cout<<b<<" ";
    // else cout<<"1 ";
 
    // if(y==w) cout<<(w/a)-1<<" ";
    // else if(z==w) cout<<(w/b)-1<<" ";
    // else cout<<w-1<<" ";
 
    // if(y==h) cout<<(h/a)-1<<" ";
    // else if(z==h) cout<<(h/b)-1<<" ";
    // else cout<<h-1<<" ";
 
    // if(y==d) cout<<(d/a)-1<<" ";
    // else if(z==d) cout<<(d/b)-1<<" ";
    // else cout<<d-1<<" ";
    return 0;
}