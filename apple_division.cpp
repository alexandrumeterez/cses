#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

void solve(vector<long> weights, int index, long s1, long s2, long &answer) {
    if (index == weights.size()) {
        answer = min(answer, abs(s1 - s2));
        return;
    }

    solve(weights, index + 1, s1 + weights[index], s2, answer);
    solve(weights, index + 1, s1, s2 + weights[index], answer);
}
int main(void) {
    long n;
    cin >> n;
    vector<long> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    long answer = 10000000000;
    solve(nums, 0, 0, 0, answer);
    cout << answer;
	return 0;
}