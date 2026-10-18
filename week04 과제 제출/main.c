#include <stdio.h>

int main(void)
{
    // 성적 가중평균
    double midterm = 80;
    double final_exam = 90;
    double homework = 100;
    double weighted_score = (midterm * 0.3) + (final_exam * 0.4) + (homework * 0.3);
    printf("weighted_score=%.2f\n", weighted_score);

    // BMI 계산
    double height = 1.70;
    double weight = 65.0;
    double bmi = weight / (height * height);
    printf("bmi=%.2f\n", bmi);

    return 0;
}
