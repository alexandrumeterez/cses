#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

int main(void) {
    long t;
    cin >> t;
    while(t--) {
        long row, col;
        cin >> row >> col;

        long m = max(row, col);
        long mid_elem = (m*m + (m-1)*(m-1)+1) / 2;
        if (row == col) {
            cout << mid_elem << endl;
        } else if (col > row) {
            if (col % 2 == 0) {
                cout << mid_elem - (col - row) << endl;
            } else {
                cout << mid_elem + (col - row) << endl;
            }
        } else if (row > col) {
            if (row % 2 == 0) {
                cout << mid_elem + (row - col) << endl;
            } else {
                cout << mid_elem - (row - col) << endl;
            } 
        }
    }

	return 0;
}