#include <stdio.h>

int main()
{
    int y,m,d;
    scanf_s("%d.%d.%d", &y,&m,&d);

    printf("%d.%02d.%02d", y,m,d);

    return 0;
}
