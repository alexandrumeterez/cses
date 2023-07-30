#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
typedef long long ll;

int main(void) {
    string s;
    cin >> s;
    int odd_count = 0;
    unordered_map<char, int> count;
    for (char c : s) {
        count[c]++;
        if (count[c] % 2 == 1) {
            odd_count+=1;
        } else {
            odd_count-=1;
        }
    }
    if (odd_count > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string half_output;
    char odd_char;
    for (auto kv: count) {
        char k = kv.first;
        int val = kv.second;

        if (val % 2 == 1) {
            odd_char = k;
            val -= 1;
        }
        half_output += string(val / 2, k);
    }
    string output;
    string other_half(half_output);
    reverse(other_half.begin(), other_half.end());

    if (odd_count != 0) {

        output = half_output + string(1, odd_char);
        output += other_half;
    } else{
        output = half_output;
        output += other_half;    
    }
    cout << output;
	return 0;
}