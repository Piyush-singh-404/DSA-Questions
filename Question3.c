#include <stdio.h>
int main() {
    int sem, sub, i, j, mark, max;

    printf("Enter no of semester: ");
    scanf("%d", &sem);

    for (i = 1; i <= sem; i++) {
        printf("Enter no of subjects in %d semester: ", i);
        scanf("%d", &sub);

        max = 0;

        printf("Marks obtained in semester %d: ", i);

        for (j = 1; j <= sub; j++) {
            scanf("%d", &mark);

            if (mark < 0 || mark > 100) {
                printf("You have entered invalid mark\n");
                return 0;
            }

            if (mark > max)
                max = mark;
        }

        printf("Maximum mark in %d semester: %d\n", i, max);
    }

    return 0;
}
