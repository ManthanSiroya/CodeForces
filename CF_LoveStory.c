#include <stdio.h>       //1829A
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    char s[] = "codeforces";

    for(int i=0;i<t;i++){
        int count=0;
        char str[20];
        scanf(" %s",str);
        int len = strlen(str);
        for(int j=0;j<len;j++){
            if(s[j]!=str[j]){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}