#include <stdio.h>           //996A

int main(){
    int n,a,b,c,d,e;
    int i=0;
    scanf("%d", &n);
    //rs 100 note
    i=n/100;
    a=i;
    i=0;
    //rs 20 note
    i=(n-(100*a))/20;
    b=i;
    i=-0;
    //rs 10 note
    i=((n)-(100*a)-(20*b))/10;
    c=i;
    i=0;
    //rs 5 note
    i=((n)-(100*a)-(20*b)-(10*c))/5;
    d=i;
    i=0;
    //rs 1 note
    i=((n)-(100*a)-(20*b)-(10*c)-(5*d))/1;
    e=i;
    i=0;
    printf("%d", (a+b+c+d+e));
    return 0;
}