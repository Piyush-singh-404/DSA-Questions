#include <stdio.h>
#include <string.h>

int isRotation(char s[], char goal[]) {
    int len_s = strlen(s);
    int len_g = strlen(goal);
    if(len_s != len_g) return 0;

    char temp[2000];
    strcpy(temp, s);
    strcat(temp, s); // Concatenate s with itself

    // Check if goal is a substring of temp
    if(strstr(temp, goal) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char s[1000], goal[1000];
    scanf("%s %s", s, goal);

    if(isRotation(s, goal))
        printf("true");
    else
        printf("false");

    return 0;
}
