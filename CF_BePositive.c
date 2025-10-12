#include <stdio.h>                       // Problem - Be Positive

int main(){
    int p,i;
      scanf("%d", &p);
      
      for ( i = 0; i < p; i++)
      {
        int n,j,k;
        int nop=0, a=0;
      scanf("%d", &n);
      
      int arr[n];
    for ( j = 0; j < n; j++)
    {
       scanf("%d", &arr[j]);
    }
    for ( k = 0; k < n ; k++)
    {
       if (arr[k]==0)
       {
        arr[k]=arr[k]+1;
        nop=nop+1;
       }
       else if(arr[k]==-1)
       {
        a++;
       }
       
    }
    if (a%2!=0)
    {
     nop=nop+2;
    }
       
      
    printf("%d\n", nop);
   
}
}
