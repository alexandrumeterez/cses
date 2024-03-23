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

    priority_queue<vector<int>, vector<vector<int>>, my_comparator> pq; 
    vector<vector<int>> customers;
    while(n--) {
        int a, b;
        cin >> a >> b;
        customers.push_back({a, b});
    } 

    sort(customers.begin(), customers.end(), [](vector<int> a, vector<int> b){
        return a[0] <= b[0];
    });


    int answer = 1;
    for (auto c: customers) {
        while(!pq.empty() && c[0] >= pq.top()[1]) {
            pq.pop();
        }

        pq.push(c);
        answer = max(answer, (int)pq.size());
    }
    cout << answer << endl;
	return 0;
}