#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc3(void) {
    int n;
    int n_1, n_2, result;

    n_2 = 0;
    n_1 = 1;

    printf("input n : ");
    scanf("%d", &n);

    if (n == 0) {
        result = n_2;
    }
    else if (n == 1) {
        result = n_1;
    }
    else {
        for (int i = 2; i <= n; i++) {
            result = n_1 + n_2;
            n_2 = n_1;
            n_1 = result;
        }
    }

    printf("%d번째 피보나치 수 = %d입니다.\n", n, result);
}

int main(void) {
    exerc3();
    return 0;
}