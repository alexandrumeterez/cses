#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
typedef long long ll;

void solve() {

}
int main(void) {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    unordered_map<int, int> place;
    int start_pos = 0;
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        place[arr[i]] = i;
    }
    int temp;
    while (m--) {
        int a, b;
        cin >> a >> b;

        temp = arr[place[a]];
        arr[place[a]] = arr[place[b]];
        arr[place[b]] = temp;

        temp = place[a];
        place[a] = place[b];
        place[b] = temp;



        int pos = place[1];
        int next_place;
        int answer = 0;

        while (pos != -1) {
            if (arr[pos] == n) {
                next_place = -1;
            } else {
                next_place = place[arr[pos] + 1];
            }
            if (next_place < pos) {
                answer++;
            }
            pos = next_place;
        }

        cout << answer << endl;
    }
    

	return 0;
}