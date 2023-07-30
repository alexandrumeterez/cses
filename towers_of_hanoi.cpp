#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

void solve(int n_disks, int start) {
    if (n_disks == 2) {
        if (start == 1) {
            cout << "1 2" << endl << "1 3" << endl << "2 3" << endl;
        } else if (start == 2) {
            cout << "2 1" << endl << "2 3" << endl << "1 3" << endl;
        }

        return;
    }

    
}
int main(void) {
    int n;
    cin >> n;

	return 0;
}