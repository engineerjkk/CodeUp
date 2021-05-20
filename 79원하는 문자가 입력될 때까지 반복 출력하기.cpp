#include <stdio.h>

int main()
{
    int a;
    int b = 0;
    int sum=0;
    scanf_s("%c", &a);
    while(1){
        b++;
        sum += sum;
        if (sum >= a)
            printf("%d", b);
        break;

    }
    

}
