#include <bits/stdc++.h>        //1788A
using namespace std;

int main(){
    int t,j;
    cin>>t;
    for ( j = 0; j < t; j++)
    {
        int n,i,k,c=0,a=0;
        cin>>n;
        int arr[n];
        for ( i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]==2)
            c++;
        }
        if(c%2!=0)
        cout<<"-1\n";
        else{
            k=c/2;
            for (int i = 0; i < n; i++) {
                if (arr[i] == 2) a++;
                if (a == k) {
                    cout << i+1 << endl;   // i is 0-based
                    break;
    }
}
    }
    }
    return 0;
}