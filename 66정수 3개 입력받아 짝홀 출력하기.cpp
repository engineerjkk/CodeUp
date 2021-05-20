#include <stdio.h>

int main()
{
    int a;
    scanf_s("%d", &a);
    if ((a % 2 == 0)?printf("%s\n","even"):printf("%s\n","odd"));
    if ((a > 0) ? printf("%s\n", "plus") : printf("%s\n", "minus"));
    
        
    

    return 0;


}
