#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int maxProd = arr[0], minProd = arr[0], result = arr[0];

    for(int i=1; i<n; i++) {
        int temp = maxProd;
        maxProd = arr[i] > arr[i]*maxProd ? arr[i] : arr[i]*maxProd;
        maxProd = maxProd > arr[i]*minProd ? maxProd : arr[i]*minProd;
        minProd = arr[i] < arr[i]*temp ? arr[i] : arr[i]*temp;
        minProd = minProd < arr[i]*minProd ? minProd : arr[i]*minProd;
        if(maxProd > result)
            result = maxProd;
    }

    printf("%d", result);
    return 0;
}
