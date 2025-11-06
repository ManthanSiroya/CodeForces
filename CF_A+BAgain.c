#include <stdio.h>

int main(){
    int t,i;
    int sum=0;
    scanf("%d", &t);
    for ( i = 0; i < t; i++)
    {
        int a;
        scanf("%d", &a);
        sum=(sum+(a%10)+(a/10));
        printf("%d \n", sum);
        sum=0;
    }
    
    return 0;
}