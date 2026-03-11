#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);

    if(month >= 3 && month <= 5)
        printf("Season: Spring\n");
    else if(month >= 6 && month <= 8)
        printf("Season: Summer\n");
    else if(month >= 9 && month <= 11)
        printf("Season: Autumn\n");
    else if(month == 12 || month == 1 || month == 2)
        printf("Season: Winter\n");
    else
        printf("Invalid Month Entered\n");

    return 0;
}
