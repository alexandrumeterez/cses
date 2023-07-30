#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

int count_powers(long x) {
    int c = 0;
    while (x % 5 == 0) {
        x = x / 5;
        c++;
    }
    return c;
}

int main(void) {
    long n;
    cin >> n;

    long ans = 0;
    for (int i = 5; i <= n; i+=5) {
        ans += count_powers(i);
    }
    cout << ans << endl;

	return 0;
}