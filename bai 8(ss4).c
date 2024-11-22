#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap canh a: ");
    scanf("%d", &a);
    printf("Nhap canh b: ");
    scanf("%d", &b);
    printf("Nhap canh c: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("La 3 canh tam giac.\n");
    } else {
        printf("Khong phai 3 canh tam giac.\n");
    }
}

