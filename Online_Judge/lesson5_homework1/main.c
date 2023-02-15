#include <stdio.h>

int main() {
    int N;
    int a[100];
    int count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < N; i++) {
        if (a[i] == 2) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
