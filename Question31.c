#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    scanf("%s %s", s, t);

    int len_s = strlen(s);
    int len_t = strlen(t);

    if(len_s != len_t) {
        printf("false");
        return 0;
    }

    int count[256] = {0};

    for(int i = 0; i < len_s; i++) {
        count[(int)s[i]]++;
        count[(int)t[i]]--;
    }

    for(int i = 0; i < 256; i++) {
        if(count[i] != 0) {
            printf("false");
            return 0;
        }
    }

    printf("true");
    return 0;
}
