#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");

    int year;
    int is_leap;

    printf("연도를 입력하세요: ");
    scanf_s("%d", &year);

    is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf("결과 (1: 윤년, 0: 평년): %d\n", is_leap);

    return 0;
}