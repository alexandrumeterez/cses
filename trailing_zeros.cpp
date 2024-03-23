#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
typedef long long ll;

// count multiples of 5, 25, 125 etc
// powers of 5

int main(void) {
    long long n;
    cin >> n;

    long long ans = 0;
    long long count = -1;

    long long i = 5;
    while (count != 0) {
        count = floor(n / i);
        ans += count;
        i *= 5;
    }
    // log_5 n 
    cout << ans;
	return 0;
}