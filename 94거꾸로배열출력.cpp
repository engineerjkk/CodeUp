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
//1������ ��ȣ�� �Ҹ� Ƚ���� ������� �������� �����Ͽ� �� �ٷ� ����Ѵ�.