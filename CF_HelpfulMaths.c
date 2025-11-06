#include <stdio.h>                      //339A
#include<string.h>

int main(){
    char st[101];
    int a=0,b=0,c=0,i;
    scanf("%s", st);
    for ( i = 0; i < 101; i+=2)
    {
        if(st[i]=='1')
            a++;
        else if(st[i]=='2')
            b++;
        else if(st[i]=='3')
            c++;
    }
    for ( i = 0; i < a; i++)
    {
        printf("1");
        printf("+");
    }
    for ( i = 0; i < b; i++)
    {
        printf("2");
        printf("+");
    }
    for ( i = 0; i < c; i++)
    {
        printf("3");
        if(i!=(c-1))
        printf("+");
    }
    
    return 0;
}