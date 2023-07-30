#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

void solve(long a, long b) {
    if (abs(a-b) > a || abs(a-b) > b) {
        cout << "NO" << endl;;
        return;
    }

    long d = abs(a - b);
    if (a > b) {
        a = a - 2 * d;
        b = b - d;
    } else {
        a = a - d;
        b = b - 2 * d;
    }

    if (a % 3 == 0 && b % 3 == 0) {
        cout<< "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(void) {
    long t;
    cin >> t;

    while(t--) {
        long a, b;
        cin >> a >> b;
        solve(a, b);
    }
	return 0;
}