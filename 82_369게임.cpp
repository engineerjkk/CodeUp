#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 33 == 0)
            printf("XX");
        else if (i % 3 == 0)
            printf("X");
        else
            printf("%d", i);
    }
}
