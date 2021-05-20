#include <stdio.h>

int main() {
    int n,i,t;
    int a[24] = { 0 };
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &t);
        a[t] = a[t] + 1;
    }
    for (i = 1; i <= 23; i++) {
        printf("%d", a[i]);
    }
    return 0;
}
//1번부터 번호가 불린 횟수를 순서대로 공백으로 구분하여 한 줄로 출력한다.