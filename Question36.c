#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char strs[n][1000];

    for(int i = 0; i < n; i++)
        scanf("%s", strs[i]);

    if(n == 0) {
        printf("");
        return 0;
    }

    char *prefix = strs[0];
    int prefixLen = strlen(prefix);

    for(int i = 1; i < n; i++) {
        int j = 0;
        while(j < prefixLen && strs[i][j] == prefix[j]) j++;
        prefixLen = j;
        if(prefixLen == 0) break;  // No common prefix
    }

    for(int i = 0; i < prefixLen; i++)
        printf("%c", prefix[i]);

    return 0;
}
