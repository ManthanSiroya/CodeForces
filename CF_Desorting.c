#include <stdio.h>              //1853A

int main(){
    int t,j;
    scanf("%d", &t);
    for ( j = 0; j < t; j++)
    {
        int n,i;
        scanf("%d", &n);
        int arr[n], arr1[(n-1)];
        for ( i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for ( i = 0; i < (n-1); i++)
        {
            arr1[i]=(arr[(i+1)]-arr[i]);     
        }
        
        int min=arr1[0];
        for ( i = 0; i < (n-1); i++)
        {
            if(arr1[i]<min)
            min=arr1[i];
        }
        if(min<0)
            printf("0\n");
        else
            printf("%d\n", (min/2)+1);
    }
    return 0;
}