#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

int main(void) {
    long n;
    cin >> n;
    if (n == 1) {
        cout << 1;
        return 0;
    } else if (n <= 3) {
        cout << "NO SOLUTION";
    } else {
        for (int i = 2; i <= n; i+=2) {
            cout << i << " ";
        } 
        for (int i = 1; i <= n; i+=2) {
            cout << i << " ";
        } 

    }

	return 0;
}