using namespace std;

long long solution(int price, int money, int count)
{
    long long total=0;
    for ( int i=0; i<count; i++ ) {
        total += (price * (i+1));
    }
    
    return total > money ? total - money : 0;
}