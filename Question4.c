#include <stdio.h>

int solve(int a, int b)
{
    int result;
    result = (a*a*a) + (3*a*a*b) + (3*a*b*b) + (b*b*b);
    return result;
}

int main()
{
    int a, b, c, ans;

    printf("Enter values of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    ans = solve(a, b);

    printf("Result = %d", ans);

    return 0;
}
