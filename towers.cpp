#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

void solve() {

}
int main(void) {
    int n;
    cin >> n;

    vector<int> towers(n);
    for(int i = 0;i < n; ++i) {
        cin >> towers[i];
    }

    int p1 = 0;
    int p2 = 0;
    int answer = 0;
    while (p2 < n) {
        p2++;
        if (towers[p2] < towers[p2-1]) {
            answer++;
            p1 = p2;
        }
    }
    cout << answer << endl;
	return 0;
}