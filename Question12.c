#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int smallest = 2147483647, secondSmallest = 2147483647;
    int largest = -2147483648, secondLargest = -2147483648;

    for(int i=0; i<n; i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if(secondSmallest == 2147483647)
        secondSmallest = -1;
    if(secondLargest == -2147483648)
        secondLargest = -1;

    printf("Second Smallest : %d\n", secondSmallest);
    printf("Second Largest : %d\n", secondLargest);

    return 0;
}
