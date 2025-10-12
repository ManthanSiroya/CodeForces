#include <stdio.h>              //Problem=213A (A team)

int main(){
    int n,i;
    int c=0;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        int arr[3];
        int j;
        int p=0;
    for ( j = 0; j<3 ; j++)
    {
        scanf("%d",&arr[j]);
    if (arr[j]==1)
        p++;
    }
    if (p>=2)
    {
       c++;
    }
}
printf("%d",c);
    return 0;
}
