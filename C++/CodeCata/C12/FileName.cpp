#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    if (arr_len <= 100 && arr_len >= 1)
    {
        for (int i = 0; i < arr_len; ++i)
        {
            if (arr[i] <= 10000 && arr[i] >= -10000)
                answer += arr[i];
        }
    }

    return answer / arr_len;
}

int main()
{
    int arr[5];
    printf("%f", solution(arr, 5));
    return 0;
}