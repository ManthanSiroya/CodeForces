#include <bits/stdc++.h>           //1807A
using namespace std;

int main(){
    int t,i;
    cin>>t;
    for ( i = 0; i < t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b)==c)
        cout<<"+\n";
        else
        cout<<"-\n";
    }
    return 0;
}