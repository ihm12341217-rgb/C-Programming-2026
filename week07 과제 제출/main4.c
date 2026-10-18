#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc4(void) {
    int sum = 0;
    double avg;
    int score;
    int i = 0;

    while (1) {
        printf("input score : ");
        scanf("%d", &score);

        if (score == -1) continue;

        sum += score;
        i++;
        printf("run\n");
    }

    avg = sum / (double)i;
    printf("avg = %lf\n", avg);
}

int main(void) {
    exerc4();
    return 0;
}