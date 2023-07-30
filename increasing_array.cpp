#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

int main(void) {
    long n;
    cin >> n;
    long prev = 0;
    long moves = 0;
    long x;
    cin >> x;
    prev = x;
    long prev_dif;

    for (int i = 2; i <= n; ++i) {
        cin >> x;
        if (x < prev) {
            prev_dif = prev - x;
        } else {
            prev_dif = 0;
        }
        moves += prev_dif;
        prev = x + prev_dif;
    }
    cout << moves;
	return 0;
}