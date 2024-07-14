#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if ( n <= 1) return false;
    if ( n == 2 ) return true;
    for ( int i=2; i<=sqrt(n); i++ ) {
        if ( n % i == 0 ) return false;
    }
    
    return true;
}

unordered_set<int> us;

int solution(string numbers) {
    sort(numbers.begin(), numbers.end());
    do {
        for ( int i=0; i<=numbers.size(); i++ ) {
            string sub = i == 0 ? "" : numbers.substr(1,i);
            us.insert(stoi(string(1, numbers[0]) + sub));
        }
    } while ( next_permutation(numbers.begin(), numbers.end()));
    
    int dap=0;
    for ( auto each : us ) {
        cout << each << " isPrime => " << isPrime(each) << "\n";
        if ( isPrime(each) ) {
            dap++;
        }
    }
    
    return dap;
}