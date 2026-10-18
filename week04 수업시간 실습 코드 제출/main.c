#include <stdio.h>

#define READ 0x01
#define WRITE 0x02
#define EXEC 0x04

int main(void)
{
    // 초를 시, 분, 초로 변환
    int total = 7384;
    int hours = total / 3600;
    int minutes = (total % 3600) / 60;
    int seconds = total % 60;
    printf("%d시간 %d분 %d초\n", hours, minutes, seconds);

    // 합격 여부 판단
    int score = 75;
    int attendance = 85;
    int passed = (score >= 60) && (attendance >= 80);
    printf("Passed: %d\n", passed);

    // EXEC 권한 추가 (비트 연산)
    unsigned int permission = READ | WRITE;
    permission |= EXEC;
    printf("permission: 0x%X\n", permission);

    // 윤년 판별 프로그램
    int year = 2024;
    int is_leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    printf("%d\n", is_leap);

    // 금액을 화폐 단위로 분해
    int amount = 38760;
    int won10000 = amount / 10000;
    amount %= 10000;
    int won1000 = amount / 1000;
    amount %= 1000;
    int won100 = amount / 100;
    amount %= 100;
    int won10 = amount / 10;
    printf("10000:%d 1000:%d 100:%d 10:%d\n", won10000, won1000, won100, won10);

    return 0;
}
