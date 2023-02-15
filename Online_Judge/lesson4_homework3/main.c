#include <stdio.h>

//换钞票
int main() {
    int a, b, c, d, count = 0;
    for (a = 1; a <= 10; a++) {
        for (b = 1; b <= 20; b++) {
            for (c = 1; c <= 40; c++) {
                for (d = 1; d <= 37; d++) {
                    if (a + b + c + d == 40 && 10 * a + 5 * b + 2 * c + 1 * d == 100) {
                        count++;//换法加1
                    }
                }
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
