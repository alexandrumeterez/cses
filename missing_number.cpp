#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

int main(void) {
    long n;

    cin >> n;
    long expected_sum = n * (n+1) / 2;
    long s = 0;
    for (int i = 1;i < n; ++i) {
        long x;
        cin >> x;
        s += x;
    }
    cout << expected_sum - s;
    return 0;
}