#include <cmath>

using namespace std;

int solution(int left, int right) {
    int sum = 0;
    for (int i = left; i <= right; ++i) {
        int sqrt_i = sqrt(i);
        if (sqrt_i * sqrt_i == i) {
            sum -= i;  // i가 완전제곱수인 경우
        } else {
            sum += i;
        }
    }
    return sum;
}