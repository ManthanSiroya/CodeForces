#include <bits/stdc++.h>          //1873A
using namespace std;
 
int main(){
    int n,min,i;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    min=abs(arr[0]);
    for ( i = 0; i < n; i++)
    {
        if(abs(arr[i])<min)
        min=abs(arr[i]);
    }
    
    cout<<min<<"\n";

    return 0;
}