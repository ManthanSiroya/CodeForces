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
        ll x,y, i;
        cin >> x>>y;
        vector<ll> v;
        v.push_back(1);
        v.push_back(x);
        for ( i = 2; i*i <= x; i++)
        {
            if(x%i==0){
                v.push_back(i);
 
                if(i!=(x/i))
                    v.push_back(x/i);
            }
        }
        ll ans=0;
        for(auto xx:v){
            if(xx==y){
                ans=1;
                break;
            }
        }
        if(ans)
        cout<<"YES\n";
        else
        cout<<"NO\n";
 
    }
    return 0;
}