#include <stdio.h>

int main() {
    int n, i, t;
    int tmp=0;
    int a[24] = { 0 };
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf_s("%d", &t);
        a[i] = t;
    }
    for (i = 0; i < n; i++) {
        if (a[i] > a[i + 1])
            tmp = a[i];
    }
    printf("%d", tmp);
    return 0;
}
//1번부터 번호가 불린 횟수를 순서대로 공백으로 구분하여 한 줄로 출력한다.