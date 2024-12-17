#include <stdio.h>

int main() {
    int a;
    printf("Nhap ao: ");
    scanf("%d", &a);
    while(a > 0) {
        int b =a % 10;
        printf("%d\n", b);
        a = a / 10;
    }
    return 0;
}

