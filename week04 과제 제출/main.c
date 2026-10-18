#include <stdio.h>

int main(void)
{
    int total = 7384;
    int hours = total / 3600;           
    int minutes = (total % 3600) / 60;  
    int seconds = total % 60;           

    printf("%d시간 %d분 %d초\n", hours, minutes, seconds);

    return 0;
}
