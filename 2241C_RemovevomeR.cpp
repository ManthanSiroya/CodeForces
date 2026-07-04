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
        string s; cin>>s;
        ll a=0,b=0,x=0,y=0,ans=1;
        if(s[0]=='0'){
            a=1;
        }
        else{
            b=1;
        }
        for ( i = 0; i < n; i++)
        {
            if(a && s[i]=='1'){
                ans=2;
                x=1;
            }
            else if(b && s[i]=='0'){
                ans=2;
                y=1;
            }
            if(x && s[i]=='0'){
            ans=1;
            break;
            } else if(y && s[i]=='1') {
                ans=1; break;
            }
        }
        if(ans!=1)
            ans=2;
        cout<<ans<<endl;
    }
    return 0;
}