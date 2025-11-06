#include <stdio.h>

int main(){
    int n,i;
    float a=0;
    scanf("%d", &n);
    float arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        a+=(100.0/n)*(arr[i]/100.0);
    }
    printf("%f", a);
    return 0;
}
