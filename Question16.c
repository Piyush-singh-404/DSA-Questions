#include <stdio.h>

int findKthLargest(int arr[], int n, int k) {
    for(int i = 0; i < k; i++) {
        int max_idx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] > arr[max_idx])
                max_idx = j;
        }
        int temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
    return arr[k-1];
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    int result = findKthLargest(arr, n, k);
    printf("%d", result);

    return 0;
}
