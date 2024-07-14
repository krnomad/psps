#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool solution(int x) {
    string s = to_string(x);
    int sum=0;
    for ( auto each : s ) {
        sum+=(each-'0');
    }
    
    return (x % sum) == 0;
}