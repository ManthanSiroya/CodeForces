#include <stdio.h>            //703A

int main(){
    int n,i;
    int a=0,b=0;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        int mi,cr;
        scanf("%d %d", &mi, &cr);
        if(mi>cr)
        a++;
        else if(mi<cr)
        b++;
        else{
        a++;
        b++;
        }
    }
    if(a>b)
    printf("Mishka\n");
    else if(b>a)
    printf("Chris\n");
    else if(b==a)
    printf("Friendship is magic!^^");
    return 0;
}