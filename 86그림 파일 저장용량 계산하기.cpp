#include <stdio.h>

int main() {
    long long int r, g, b;
    double result;
    scanf_s("%lld %lld %lld", &r, &g, &b);
    result = r * g * b;
    printf("%.2lf MB", result / (8 * 1024 * 1024));
}
