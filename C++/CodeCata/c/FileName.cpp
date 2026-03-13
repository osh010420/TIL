#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    vector<int> vec;
    while (n > 0)
    {
        vec.push_back(n % 10);
        n /= 10;
    }
    sort(vec.begin(), vec.end(), greater<int>());
    long long answer = 0;

    for (int i : vec)
    {
        answer = answer * 10 + i;
    }

    return answer;
}