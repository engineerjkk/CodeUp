#include <stdio.h>

int main()
{
    int a, b;
    scanf_s("%d %d", &a, &b);
    if ((a == b) || (!a == !b)) {
        printf("%d", 1);
    }
    else
        printf("%d", 0);
    return 0;

    //printf(¡°%d¡±, (a&&!b)||(!a&&b));
}

