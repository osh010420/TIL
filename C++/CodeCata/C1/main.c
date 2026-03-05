#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int solution(int num1, int num2) {
    int answer = 0;

    if (num1 < -50000 || num1 > 50000 || num2 < -50000 || num2 > 50000)
        return 123;
    
    answer = num1 - num2;
    return answer;
}
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d", solution(num1, num2));

    return 0;
}