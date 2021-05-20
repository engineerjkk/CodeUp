#include <stdio.h>

int main()
{
    int i;
    int r,g,b;
    scanf_s("%d %d %d", &r,&g,&b);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < g; j++) {
            for (int k = 0; k < b; k++) {
                printf("%d %d %d\n", r, g, b);
            }
        }
    }
    printf("%d", r * g * b);
    
}
