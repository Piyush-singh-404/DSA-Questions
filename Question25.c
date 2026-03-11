#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int nums1[n1], nums2[n2];
    for(int i=0; i<n1; i++)
        scanf("%d", &nums1[i]);
    for(int i=0; i<n2; i++)
        scanf("%d", &nums2[i]);

    int result[n1 < n2 ? n1 : n2];
    int k = 0;

    for(int i=0; i<n1; i++) {
        int exists = 0;
        for(int j=0; j<k; j++) {
            if(result[j] == nums1[i]) {
                exists = 1;
                break;
            }
        }
        if(exists) continue;

        for(int j=0; j<n2; j++) {
            if(nums1[i] == nums2[j]) {
                result[k++] = nums1[i];
                break;
            }
        }
    }

    for(int i=0; i<k; i++) {
        printf("%d", result[i]);
        if(i < k-1) printf(",");
    }

    return 0;
}
