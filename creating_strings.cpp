#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;
typedef long long ll;

// void generate(string s, set<int> marked, string& current, set<string>& ans) {
//     if (current.size() == s.size()) {
//         ans.insert(current);
//         return;
//     }

//     for (int i = 0; i < s.size(); ++i) {
//         if (marked.count(i)) continue;
//         current.push_back(s[i]);
//         marked.insert(i);
//         generate(s, marked, current, ans);
//         current.pop_back();
//         marked.erase(i);
//     }
// }

void generate(string s, int index, string& current, vector<string>& ans) {
    if (index == s.size()) {
        ans.push_back(current);
        return;
    }

    current.push_back(s[index]);
    generate(s, index + 1, current, ans);
    current.pop_back();
    generate(s, index + 1, current, ans);
}

int main(void) {
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    string current;
    vector<string> ans;
    vector<int> marked(s.size());
    generate(s, 0, marked, current, ans);
    cout << ans.size() << endl;

    for(auto ss: ans) {
        cout << ss << endl;
    }
	return 0;
}