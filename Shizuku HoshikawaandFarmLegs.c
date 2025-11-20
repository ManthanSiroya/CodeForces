#include <stdio.h>

int main(){
    int t,j;
    scanf("%d", &t);
    for ( j = 0; j < t; j++)
    {
        int n,i,a=0;
        scanf("%d", &n);
        if(n%2!=0)
        printf("0\n");
        else{
            a=(n/4)+1;
            printf("%d\n", a);
        }
    }
    return 0;
}
