#include <stdio.h>
#include <string.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char str[100];
        scanf("%s", str);
        int l = strlen(str);
        char a = str[0];
        char b = str[l - 1];
        if (l < 11)
            printf("%s\n", str);
        else
            printf("%c%d%c\n", a, l - 2, b);
    }
    return 0;
}
