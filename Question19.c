#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int nums1[m+n], nums2[n];
    
    for(int i = 0; i < m; i++)
        scanf("%d", &nums1[i]);
    for(int i = 0; i < n; i++)
        scanf("%d", &nums2[i]);
    
    int i = m - 1, j = n - 1, k = m + n - 1;
    while(i >= 0 && j >= 0) {
        if(nums1[i] > nums2[j])
            nums1[k--] = nums1[i--];
        else
            nums1[k--] = nums2[j--];
    }
    while(j >= 0)
        nums1[k--] = nums2[j--];

    for(int i = 0; i < m+n; i++) {
        printf("%d", nums1[i]);
        if(i < m+n-1) printf(",");
    }

    return 0;
}
