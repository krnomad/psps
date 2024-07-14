#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a = {1,2,3,4,5}; // 5
vector<int> b = {2,1,2,3,2,4,2,5}; // 8
vector<int> c = {3,3,1,1,2,2,4,4,5,5}; // 10

vector<int> dap(3);

vector<int> solution(vector<int> answers) {
    for ( int i=0; i<answers.size(); i++ ) {
        if ( a[i%5] == answers[i] ) dap[0]++;
        if ( b[i%8] == answers[i] ) dap[1]++;
        if ( c[i%10] == answers[i] ) dap[2]++;
    }
    
    int maxValue = *max_element(dap.begin(), dap.end());
    
    vector<int> answer;
    for ( int i=0; i<dap.size(); i++) {
        if ( maxValue == dap[i] ) answer.push_back(i+1);
    }
    
    return answer;
}