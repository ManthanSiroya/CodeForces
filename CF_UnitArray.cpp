#include <bits/stdc++.h>        //1834A
using namespace std;

int main(){
    int t,j;
    cin>>t;
    for ( j = 0; j < t; j++)
    {
        int n,i,sum=0,nop=0,noc=0,prod=1;
        cin>>n;
        int arr[n];
        // Sum part
        for ( i = 0; i < n; i++){  
            cin>>arr[i];
            sum+=arr[i];
        }

        if(sum<0){
            do{
                sum+=2;
                nop++;
            }while(sum<0);
        }
        
        // Product part
        for ( i = 0; i < n; i++){
            prod=prod*arr[i];
        }
        if(nop%2==0){
            if(prod!=1){
            nop++;
            }
            }
        else{
            if(prod==1){
            nop++;
            }
            }    
        
        printf("%d\n", nop);
    } 
    return 0;
}