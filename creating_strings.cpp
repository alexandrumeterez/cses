#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;
typedef long long ll;

void solve(unordered_map<char, int> count, int total_length, string curr, vector<string> &ans) {
    if (curr.size() == total_length) {
        ans.push_back(curr);
        return;
    }

    for(char c = 'a'; c <= 'z'; ++c) {
        if(count[c] > 0) {
            count[c]-=1;
            curr += string(1, c);
            solve(count, total_length, curr, ans);
            count[c] += 1;
            curr.pop_back();
        }
    }
}

int main(void) {
    string s;
    cin >> s;
    int total_length = 0;
    unordered_map<char, int> count;
    for(char c: s) {
        count[c]++;
        total_length++;
    }
    vector<string> ans;
    solve(count, total_length, "", ans);

    cout << ans.size() << endl;
    for (auto s : ans) {
        cout << s << endl;
    }
	return 0;
}