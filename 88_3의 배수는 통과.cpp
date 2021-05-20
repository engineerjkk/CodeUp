#include <stdio.h>

int main() {
    int a;
    scanf_s("%d", &a);
    for (int i = 0; i <= a; i++) {
        if (i % 3 == 0) {
            continue;
        }
        printf("%d ", i);
    }
}
