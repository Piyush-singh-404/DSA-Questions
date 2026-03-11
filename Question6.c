#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    char name[50], minName[50];
    int price, discount, minDiscount = 1000000;
    char line[100];

    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++)
    {
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%[^,],%d,%d", name, &price, &discount);

        int discValue = (price * discount) / 100;

        if(discValue < minDiscount)
        {
            minDiscount = discValue;
            strcpy(minName, name);
        }
    }

    printf("%s", minName);

    return 0;
}
