#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

void solve(vector<string> ans) {

}

int main(void) {
    int n;
    cin >> n;

    vector<string> ans;
    ans.push_back("0");
    ans.push_back("1");

    if (n == 1) {
        for (string s: ans) {
            cout << s << endl;
        }
        return 0;
    }

    for (int i = 2; i <= n; ++i) {
        vector<string> ans_copy(ans);
        reverse(ans_copy.begin(), ans_copy.end());
        ans.insert(ans.end(), ans_copy.begin(), ans_copy.end());

        for (int j = 0; j < ans.size(); ++j) {
            if (j < ans.size() / 2) {
                ans[j] = string(1, '0') + ans[j];
            } else {
                ans[j] = string(1, '1') + ans[j];
            }
        }
    }

    for(string s : ans) {
        cout << s << endl;
    }
	return 0;
}