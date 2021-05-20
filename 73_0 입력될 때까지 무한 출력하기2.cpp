#include <stdio.h>

int main()
{
    int a;
    scanf_s("%d", &a);
    while (a != 1) {      
        printf("%d\n", --a);
    }

    return 0;


}
