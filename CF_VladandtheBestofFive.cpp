#include <bits/stdc++.h>           //1926A
using namespace std;

int main(){
    int t,l;
    cin>>t;
    for ( l = 0; l < t; l++)
    {
        int a=0,b=0,i;
        char arr[6];
        for ( i = 0; i < 5; i++)
        {
            cin>>arr[i];
            if(arr[i]=='A')
                a++;
            else if(arr[i]=='B')
                b++;
        }
        if(a>b)
            cout<<"A\n";
        else
            cout<<"B\n";        
    }
    
    return 0;
}