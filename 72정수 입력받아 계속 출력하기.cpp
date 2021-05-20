#include <stdio.h>

int main()
{
    int i, n;
    scanf_s("%d", &n);
    for (i = 0; i < n; i++) {
        int x;
        scanf_s("%d", &x);
        printf("%d\n",x);
    }

    return 0;


}
