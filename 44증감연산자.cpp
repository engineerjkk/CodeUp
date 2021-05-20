#include <stdio.h>

int main()
{
    int a,b;
    scanf_s("%d", &a,&b);
    printf("%d", a+b);
    printf("%d", a - b);
    printf("%d", a * b);
    printf("%d", a % b);
    printf("%.2f", a / b);
    return 0;
}

