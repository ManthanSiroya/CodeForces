#include <stdio.h>      //723A
#include <stdlib.h>

int main(){
    int x1,x2,x3,max,min;
    scanf("%d %d %d", &x1, &x2, &x3);
    if(x1>x2){
        if(x1>x3)
        max=x1;
        else
        max=x3;
    }
    else{
        if(x2>x3)
        max=x2;
        else
        max=x3;
    }
    if(x1<x2){
        if(x1<x3)
        min=x1;
        else
        min=x3;
    }
    else{
        if(x2<x3)
        min=x2;
        else
        min=x3;
    }
    printf("%d", (max-min));
    return 0;
}