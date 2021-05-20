#include <stdio.h>

int main()
{
    char a;
    scanf_s("%c", &a);
    for (int i = 97; i <= a; i++) {
        printf("%c ", i);
    }
return 0;

}
