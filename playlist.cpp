#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;
typedef long long ll;

void solve() {

}
int main(void) {
    int n;
    cin >> n;
    vector<long long> durations(n);
    set<long long> s;
    for (int i = 0; i < n; ++i) {
        cin >> durations[i];
        s.insert(durations[i]);
    }

    if (s.size() == n) {
        cout << n << endl;
        return 0;
    }

    unordered_map<long long, long long> count;
    long long p1 = 0;
    long long p2 = 0;
    long long answer = 0;
    while(p2 < n) {
        count[durations[p2]] += 1;
        while (count[durations[p2]] > 1) {
            count[durations[p1]]--;
            p1++;
        }
        answer = max(p2 - p1 + 1, answer);
        p2++;
    }
    cout << answer;
	return 0;
}