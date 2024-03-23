#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;
// 7 7 : 5 6 : 4 4 : 2 3 : 1 1
// 8 8 : 6 7 : 5 5 : 3 4 : 2 2
// 9 9 : 7 8 : 6 6 : 4 5 : 3 3
// 6 6 : 4 5 : 3 3
// 5 3 : 3 2 : 1 1

int main(void) {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int diff = abs(a - b);
        if (a > b) {
            a = a - 2 * diff;
            b = b - diff;
        } else {
            a = a - diff;
            b = b - 2 * diff;
        }
        if (a < 0 || b < 0) {
            cout << "NO\n";
            continue;
        }

        if (a % 3 == 0 && b % 3 == 0) {
            cout << "YES\n";
            continue;
        } else {
            cout << "NO\n";
        }
    }
	return 0;
}