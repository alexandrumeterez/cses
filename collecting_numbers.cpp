#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
typedef long long ll;

void solve() {

}
int main(void) {
    int n;
    cin >> n;

    vector<int> arr(n);
    unordered_map<int, int> place;
    unordered_map<int, int> next_place;
    int start_pos = 0;
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        place[arr[i]] = i;
    }
    for(int i = 0; i < n; ++i) {
        if (arr[i] == n) {
            next_place[arr[i]] = -1;
        } else {
            next_place[arr[i]] = place[arr[i] + 1];
        }
    }

    int pos = place[1];
    int answer = 0;
    while (pos != -1) {
        if (next_place[arr[pos]] < pos) {
            answer++;
        }
        pos = next_place[arr[pos]];
    }

    cout << answer << endl;

	return 0;
}