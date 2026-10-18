#include <stdio.h>

int main(void)
{
    int total = 7384;
    int hours = total / 3600;
    int minutes = (total % 3600) / 60;
    int seconds = total % 60;

    printf("%d시간 %d분 %d초\n", hours, minutes, seconds);

    return 0;
}   // 초를 시.분.초로 변환



#include <stdio.h>

int main(void)
{
    int score = 75;
    int attendance = 85;

    int passed = (score >= 60) && (attendance >= 80);

    printf("Passed: %d\n", passed);

    return 0;
}   // 합격 여부 판단



#include <stdio.h>

#define READ 0x01
#define WRITE 0x02
#define EXEC 0x04

int main(void)
{
    unsigned int permission = READ | WRITE;

    permission |= EXEC;

    printf("permission: 0x%X\n", permission);

    return 0;
}   // EXEC 권한 추가
