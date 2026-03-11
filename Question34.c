#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int len = strlen(s);
    int isPalindrome = 1;

    for(int i = 0; i < len/2; i++) {
        if(s[i] != s[len-1-i]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("true");
    else
        printf("false");

    return 0;
}
