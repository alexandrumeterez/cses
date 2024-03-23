#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;
typedef long long ll;

void solve() {

}
int main(void) {
    set<int> s;
    int n;
    cin >> n;
    for(int i =0 ; i < n;++i) {
        int x; 
        cin >> x;
        s.insert(x);
    }
    cout << s.size();
    
	return 0;
}