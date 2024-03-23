#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

void solve() {

}
int main(void) {
    long long n;
    cin >> n;
    vector<long long> prices(n);
    for(int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());

    long long median;
    median = prices[n/2];
    long long ans = 0;
    for(int i = 0; i < n; ++i) {
        ans += abs(prices[i] - median);
    }
    cout << ans << endl;

	return 0;
}