#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int age) {
    int answer = 0;

    answer = 2022 - age + 1;

    return answer;
}

int main()
{
    int age;
    scanf("%d", &age);
    printf("%d", solution(age));
    return 0;
}