#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer;
    for ( int i=1; i<=1000000; i++ ) {
        if ( n % i == 1 ) {
            answer = i; break;
        }
    }
    return answer;
}