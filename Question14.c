#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int A[m][n], B[m][n];
    
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    int identical = 1;
    for(int i = 0; i < m && identical; i++)
        for(int j = 0; j < n; j++)
            if(A[i][j] != B[i][j]) {
                identical = 0;
                break;
            }

    if(identical)
        printf("Matrices are identical\n");
    else
        printf("Matrices are not identical\n");

    return 0;
}
