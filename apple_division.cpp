#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;
typedef long long ll;

void solve(vector<int> used, int index, vector<int> p, long long totalsum, long long currsum, long long& answer) {
    if (index == p.size()) {
        answer = min(answer, abs(totalsum - 2*currsum));
        return;
    }

    if (!used[index]) {
        used[index] = 1;
        solve(used, index + 1, p, totalsum, currsum + p[index], answer);
        used[index] = 0;
    }

    solve(used, index + 1, p, totalsum, currsum, answer); 
}

int main(void) {
    int n;
    cin >> n;

    vector<int> p(n);
    vector<int> used(n);
    long long total_sum = 0;
    for(int i = 0; i < n; ++i) {
        cin >> p[i];
        total_sum += p[i];
    }

    long long answer = 10000000001;
    vector<int> g1;
    solve(used, 0, p, total_sum, 0, answer);
    cout << answer;
	return 0;
}