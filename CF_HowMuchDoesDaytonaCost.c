#include <stdio.h>          //1878A

int main(){
    int t,j;
    scanf("%d", &t);
    for ( j = 0; j < t; j++)
    {
        int n,i,k;
        int a=0;
        scanf("%d %d", &n, &k);
        int arr[n];
        for ( i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]==k)
            a++;
        }
        if(a!=0)
        printf("YES\n");
        else
        printf("NO\n");
    }
    
    return 0;
}