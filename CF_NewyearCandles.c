#include <stdio.h>          //379A

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int total = a;
    int n = a;
    while (n >= b) {
        int m;
        m =n / b;
        total += m;
        n = m + (n % b);
    }
    printf("%d\n", total);
    return 0;
}
