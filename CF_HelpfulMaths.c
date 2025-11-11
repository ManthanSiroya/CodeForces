#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int count[4] = {0}; 
    scanf("%s", s);
    int l = strlen(s);

    for (int i = 0; i < l; i++) {
        if (s[i] == '1') count[1]++;
        else if (s[i] == '2') count[2]++;
        else if (s[i] == '3') count[3]++;
    }

    int a = 1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < count[i]; j++) {
            if (!a) printf("+");
            printf("%d", i);
            a = 0;
        }
    }

    return 0;
}
