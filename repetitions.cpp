#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;


int main(void) {
    string s;
    cin >> s;

    int start = 0;
    int end = 0;
    int length = 0;
    while (end < s.length()) {
        if (s[end] == s[start]) {
            end++;
            length = max(length, end - start);
        } else {
            start = end;
        }
    }
    cout << length;
	return 0;
}