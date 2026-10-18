#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("chcp 65001 > nul");

    int month, year;

    printf("월을 입력하세요 (1~12): ");
    scanf("%d", &month);

    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d월은 31일까지 있습니다.\n", month);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("%d월은 30일까지 있습니다.\n", month);
        break;
    case 2:
        printf("연도를 입력하세요: ");
        scanf("%d", &year);

        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("%d년 2월은 윤년이므로 29일입니다.\n", year);
        }
        else {
            printf("%d년 2월은 평년이므로 28일입니다.\n", year);
        }
        break;
    default:
        printf("잘못된 입력입니다. 1~12 사이의 숫자를 입력하세요.\n");
        break;
    }

    return 0;
}