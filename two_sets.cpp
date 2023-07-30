#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

int main(void) {
    long n;
    cin >> n;
    long s = n * (n+1) / 2;

    if (s % 2 == 1) {
        cout << "NO";
        return 0;
    }

    vector<long> set1, set2;
    long s1 = 0;
    long s2 = 0;

    for (int i = n; i >= 1; --i) {
        if (s1 <= s2) {
            set1.push_back(i);
            s1 += i;
        } else {
            set2.push_back(i);
            s2 += i;
        }
    }

    if (s1 == s2) {
        cout << "YES" << endl;
        cout << set1.size() << endl;
        for (auto x: set1) {
            cout << x << " ";
        }
        cout << endl;
        cout << set2.size() << endl;
        for (auto x: set2) {
            cout << x << " ";
        }
        cout << endl;
    } else {
        cout << "NO";
    }
    
	return 0;
}