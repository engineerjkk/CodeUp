#include <stdio.h>

int main()
{
    char a;
    scanf_s("%c", &a);
    while (a != 'q') {
        printf("%c\n", a);
    }
    return 0;

}
