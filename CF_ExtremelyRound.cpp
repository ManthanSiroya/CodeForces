#include <bits/stdc++.h>            //1766A
using namespace std;

int main(){
    int t,l;
    cin>>t;
    for ( l = 0; l < t; l++)
    {
        int n,d,temp;
        int ans=0;
        cin>>n;
        
        for (d = 1; d <= 9; d++) {
            temp = d;
            while (temp <= n) {
                ans++;
                temp *= 10;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
// 5
// 9
// 42
// 13
// 100
// 111

// 9
// 13
// 10
// 19
// 19
