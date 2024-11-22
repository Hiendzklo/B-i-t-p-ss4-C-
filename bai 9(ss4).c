#include <stdio.h>

int isLeapYear(int year) {
    // Kiem tra nam nhuan
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; 
    } else {
        return 0;  
    }
}

int main() {
    int day, month, year;

    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (year <= 0) {
        printf("Nam khong hop le.\n");
        return 0;
    }

    if (month < 1 || month > 12) {
        printf("Thang khong hop le.\n");
        return 0;
    }

    // Kiem tra so ngày hop ly cho tung tháng
    int daysInMonth;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = (isLeapYear(year)) ? 29 : 28; // Kiem tra nam nhuan
            break;
    }

    // Kiem tra ngày hop le
    if (day < 1 || day > daysInMonth) {
        printf("Ngay khong hop le.\n");
    } else {
        printf("Ngay thang nam hop le.\n");
    }
}

