#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(int num) {
    char* answer = (char*)malloc(sizeof(char) * 5);
    if (num % 2 == 0)
        strcpy(answer, "Even");
    else
        strcpy(answer, "Odd");

    return answer;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    char* result = solution(n);
    printf("%s\n", result);
    free(result);


    return 0;
}