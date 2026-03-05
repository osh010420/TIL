#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
    if (0 < angle && angle < 90)
        return 1;
    else if (angle == 90)
        return 2;
    else if (90 < angle && angle < 180)
        return 3;
    else if (angle == 180)
        return 4;
    else
        return 0;
}

int main()
{
    int angle;
    scanf("%d", &angle);
    printf("%d", solution(angle));
    return 0;
}