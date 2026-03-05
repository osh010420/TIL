#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = (double)num1 / (double)num2 * 1000;

    if (0 <= num1 <= 100 && 0 <= num2 <= 100)
        return answer;
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d", solution(num1, num2));
    return 0;
}