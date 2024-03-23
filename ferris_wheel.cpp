#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

void solve() {

}
int main(void) {
    int n;
    int x;
    cin >> n >> x;

    vector<int> weights(n);
    for(int i =0 ; i < n; ++i) {
        cin >> weights[i];
    }

    sort(weights.begin(), weights.end());
    long p1 = 0;
    int p2 = n-1;
    int gondolas = 0;

    int current = weights[p2];
    while (p1 <= p2) {
        if (weights[p2] + weights[p1] <= x) {
            p1++;
            p2--;
        } else {
            p2--;
        }
        gondolas++;
    }
    cout << gondolas;
	return 0;
}