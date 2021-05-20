#include <stdio.h>

int main() {
    int a, r, n;
    scanf_s("%d %d %d", &a, &r, &n);
    for (i=1; i < n; i++) {
        a = a * r;
    }
    printf("%d\n", a);
    return 0;
}
