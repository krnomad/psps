#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> seoul) {
    int dap=0;
    for ( auto &each : seoul ) {
        if ( each == "Kim" ) break;
        dap ++;
    }
    stringstream ss; ss << "김서방은 " << dap << "에 있다";
    cout << ss.str();
    
    return ss.str();
}