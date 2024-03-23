#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

void solve() {

}
int main(void) {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicants(n);
    vector<int> apartments(m);
    for(int i = 0; i < n; ++i) {
        cin >> applicants[i];
    }

    for(int i = 0; i < m; ++i) {
        cin >> apartments[i];
    }

    sort(apartments.begin(), apartments.end());
    sort(applicants.begin(), applicants.end());


    int p1 = 0;
    int p2 = 0;
    int answer = 0;
    while (p1 < n && p2 < m) {
        // p1 for applicants
        // p2 for apartments

        int low_end = applicants[p1] - k;
        int high_end = applicants[p1] + k;

        int price = apartments[p2];

        if (price < low_end) {
            p2++;
        } else if (price > high_end) {
            p1++;
        } else {
            p2++;
            p1++;
            answer++;
        }
    }
    cout << answer;
	return 0;
}