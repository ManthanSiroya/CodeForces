#include <stdio.h>            //1A

int main(){
    long long n,m,a,total=0;
    scanf("%lld %lld %lld", &n, &m, &a);
    if(n%a!=0 && m%a!=0)
    total+=(n/a)*(m/a)+(m/a)+(n/a)+1;
    else if(m%a!=0)
    total+=(n/a)*(m/a)+(n/a);
    else if(n%a!=0)
    total+=(n/a)*(m/a)+(m/a);
    else
    total+=(n/a)*(m/a);
    if(total==0)
    total=1;
    printf("%lld", total);
    return 0;
}