#include <stdio.h>

int main(void) {
    int x, Sum = 0;
    int i;
    while (scanf("%d", &x) != EOF) {
        Sum = Sum + x;
        printf("x: %d, Sum: %d\n", x, Sum);
        /* x = 0; */
    }
    printf("%d\n", Sum);
    return 0;
}
