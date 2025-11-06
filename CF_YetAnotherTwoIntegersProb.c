#include <stdio.h>                       //1409A

int main(){
    int n,i;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        int a,b,c,d;
        scanf("%d %d", &a, &b);
        if(a>b){
        c=a-b;
        d=(c/10);
        if(c%10!=0 || c==0)
        printf("%d\n", (d+1));
        else
        printf("%d\n", (d));
        }
        else if(a<b){
        c=b-a;
        d=(c/10);
        if(c%10!=0 || c==0)
        printf("%d\n", (d+1));
        else
        printf("%d\n", (d));
        }
        else
        printf("0\n");
    }
    
    return 0;
}