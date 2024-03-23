#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

int main(void) {
    long n;
    cin >> n;

    for (long k = 1; k <= n; ++k) {
        // Think of it as a complete graph
        // number of edges in graph with V nodes is V*(V-1)/2
        long V = k*k;

        long number_of_total_positions = V * (V - 1) / 2;
        
        // Now each attacking position lives in a (2x3) or (3x2) board
        // so count these
        long count = (k-1) * (k-2) * 2; // *2 because same count for (2x3) and (3x2)

        // in each box of (2x3) and (3x2) there are 2 attacking positions, hence:
        cout << number_of_total_positions - 2*count << endl;
    }


	return 0;
}
