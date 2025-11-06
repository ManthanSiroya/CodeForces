#include <stdio.h>              //282A

int main(){
    int i,n;
    int x=0;
    scanf("%d", &n);
    char st[3];
    scanf("%s", st);
    for ( i = 0; i < 3; i++)
    {
        if(*st=="X++" || *st=="++X")
        x++;
        else
        x--;
    }

    return 0;
}