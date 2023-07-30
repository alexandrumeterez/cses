#include <iostream>
#include <algorithm>
#include <vector>
#define MOD 1000000007
using namespace std;
typedef long long ll;

int main(void) {
    long long n;
    cin >> n;
    long x = 2;
    long long result = 1;
    while (n != 0) {
        if (n % 2 == 1) {
            result = (result * x) % MOD;
            n-=1;
        } else {
            x = (x * x) % MOD;
            n /= 2;
        }
    }
    cout << result % MOD;
	return 0;
}