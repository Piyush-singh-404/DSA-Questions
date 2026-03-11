#include <stdio.h>
#include <string.h>

void findLongestPalindrome(char s[]) {
    int start = 0, maxLen = 0;
    int len = strlen(s);

    for(int i = 0; i < len; i++) {
        // Odd length palindrome
        int left = i, right = i;
        while(left >= 0 && right < len && s[left] == s[right]) {
            if(right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }

        // Even length palindrome
        left = i; right = i+1;
        while(left >= 0 && right < len && s[left] == s[right]) {
            if(right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    for(int i = start; i < start + maxLen; i++)
        printf("%c", s[i]);
}

int main() {
    char s[1000];
    scanf("%s", s);
    findLongestPalindrome(s);
    return 0;
}
