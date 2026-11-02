#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void) {
    int scores[SIZE];
    int i;
    int max, min;
    int sum = 0;
    double average;

    srand((unsigned int)time(NULL));

    for (i = 0; i < SIZE; i++) {
        scores[i] = rand() % 101;
        sum += scores[i];
    }

    max = scores[0];
    min = scores[0];

    for (i = 1; i < SIZE; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
        if (scores[i] < min) {
            min = scores[i];
        }
    }

    average = (double)sum / SIZE;

    printf("===== [ 학생 점수 관리 시스템 ] =====\n");
    for (i = 0; i < SIZE; i++) {
        printf("학생 %2d번 점수 : %3d점\n", i + 1, scores[i]);
    }
    printf("-------------------------------------\n");
    printf("최댓값 (최고 점수) : %d점\n", max);
    printf("최솟값 (최저 점수) : %d점\n", min);
    printf("전체 평균 점수     : %.2f점\n", average);
    printf("=====================================\n");

    return 0;
}
