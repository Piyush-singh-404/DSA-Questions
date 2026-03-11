#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int count[256] = {0};
    int len = strlen(s);

    for(int i = 0; i < len; i++)
        count[(int)s[i]]++;

    for(int i = 0; i < len; i++) {
        if(count[(int)s[i]] == 1) {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");
    return 0;
}
