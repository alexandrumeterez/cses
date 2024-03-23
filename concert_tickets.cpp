#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;
typedef long long ll;

int main(void) {
    int n, m;
    cin >> n >> m;

    multiset<int> tickets;
    int customer;

    for (int i = 0; i < n; ++i) {
        int ticket;
        cin >> ticket;
        tickets.insert(ticket);
    }

    for (int i = 0; i < m; ++i) {
        cin >> customer;
        auto upper = tickets.upper_bound(customer);
        if (upper == tickets.end()) {
            
        }
    }
    


	return 0;
}