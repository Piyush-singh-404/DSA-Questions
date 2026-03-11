#include <stdio.h>

int tyres(int cars, int bikes)
{
    return (cars * 4) + (bikes * 2);
}

int main()
{
    int n, cars, bikes, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &cars, &bikes);
        printf("%d\n", tyres(cars, bikes));
    }

    return 0;
}
