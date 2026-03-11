#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);
    
    int len = strlen(str);
    char result[1000];
    int index = 0;

    for(int i=0; i<len; i++) {
        if(str[i] != '#') {
            result[index++] = str[i];
        }
    }
    result[index] = '\0';

    printf("%s", result);
    return 0;
}
