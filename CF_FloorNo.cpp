#include <bits/stdc++.h>       //1426A
using namespace std;

int main(){
    int t,l;
    cin>>t;
    for ( l = 0; l < t; l++)
    {
        int n,x,i,a=1,b=1;
        cin>>n>>x;
        if(n<=2)
            cout<<"1\n";
        else{
        while(b){
            if((n>=((a-1)*x)+3) && n<=((a*x)+2))
                b=0;
            a++;
            }
            cout<<a<<endl;
        }
    }
    return 0;
}