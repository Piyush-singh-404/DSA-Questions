#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char steps[n+1];
    scanf("%s", steps);

    int seaLevel = 0, valleys = 0;

    for(int i=0; i<n; i++) {
        if(steps[i] == 'U') {
            seaLevel++;
            if(seaLevel == 0) valleys++;
        } else if(steps[i] == 'D') {
            seaLevel--;
        }
    }

    printf("%d", valleys);
    return 0;
}
