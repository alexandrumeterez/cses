#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
typedef long long ll;



struct my_comparator
{
    // queue elements are vectors so we need to compare those
    bool operator()(std::vector<int> const& a, std::vector<int> const& b) const
    {
        // reverse sort puts the lowest value at the top    
        return a[1] > b[1];
    }
};

int main(void) {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }



    priority_queue<vector<int>, vector<vector<int>>, my_comparator> pq; 
    vector<vector<int>> customers;
    while(n--) {
        int a, b;
        cin >> a >> b;
        customers.push_back({a, b});
    } 

    if (n == 2) {
        cout << 1 + (customers[1][0] >= customers[0][1]) << endl;
    }

    sort(customers.begin(), customers.end(), [](vector<int> a, vector<int> b){
        return a[0] <= b[0];
    });

    int answer = 0;
    int p = 0;
    while (p < customers.size()) {
        if (pq.size() == 0) {
            pq.push(customers[p]);
            continue;
        }

        int top_end = pq.top();
        pq.pop();
    }
	return 0;
}