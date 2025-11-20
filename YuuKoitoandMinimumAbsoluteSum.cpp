#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,j;
    cin>>t;
    for (j = 0;j < t; j++)
    {
        int n,i,out=0;
        cin>>n;
        int arr[n];
        for ( i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(arr[(n-1)]==-1 && arr[0]==-1){
            arr[(n-1)]=0;
            arr[0]=0;
            cout<<"0\n";
        }
        else if(arr[(n-1)]==-1){
            arr[(n-1)]=arr[0];
            cout<<"0\n";
        }
        else if(arr[0]==-1){
            arr[0]=arr[(n-1)];
            cout<<"0\n";
        }
        else{
            cout<<abs(arr[(n-1)]-arr[0])<<endl;
        }
        for ( i = 0; i < n; i++)
        {
            if(arr[i]==(-1))
            arr[i]=0;
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
