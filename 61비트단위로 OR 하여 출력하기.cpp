#include <stdio.h>
//배타적 논리합 : 서로 다를 때 1
int main()
{
    int a, b, c;
    scanf_s("%d %d", &a, &b);
    c = a | b;
    printf("%d", c);

    return 0;


}
