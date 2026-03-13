#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    for (int i = 0; i <= n; ++i)
    {
        if (i % 2 == 0)
            answer += i;
    }
    return answer;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", solution(a));

    return 0;
}