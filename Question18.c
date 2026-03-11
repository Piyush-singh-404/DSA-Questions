#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int N = n - 1; // Since array size is N+1
    int total = N * (N + 1) / 2;
    int sum = 0;
    for(int i=0; i<n; i++)
        sum += arr[i];

    printf("%d", sum - total);
    return 0;
}
