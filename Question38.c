#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int lastIndex[256];
    for(int i = 0; i < 256; i++) lastIndex[i] = -1;

    int maxLen = 0, start = 0;
    int len = strlen(s);

    for(int i = 0; i < len; i++) {
        if(lastIndex[(int)s[i]] >= start)
            start = lastIndex[(int)s[i]] + 1;

        lastIndex[(int)s[i]] = i;
        if(i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("%d", maxLen);
    return 0;
}
