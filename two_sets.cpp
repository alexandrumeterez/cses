#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

int main(void) {
    long n;
    cin >> n;

    if (n <= 2) {
        cout << "NO";
        return 0;
    }

    long s1 = 0;
    long s2 = 0;
    vector<long> v1, v2;
    
    v1.push_back(n);
    s1 += n;

    v2.push_back(n-1);
    s2 += n-1;



    for(long i = n-2; i >= 1; --i) {
        if (s1 < s2) {
            v1.push_back(i);
            s1 += i;
        } else if (s2 <= s1) {
            v2.push_back(i);
            s2 += i;
        }
    }
    if (s1 != s2) {
        cout << "NO"; 
        return 0;
    } else {
        cout << "YES" << endl;
        cout << v1.size() << endl;
        for (int i = v1.size()-1; i >= 0; --i) {
            cout << v1[i] << " ";
        }
        cout << endl;

        cout << v2.size() << endl;
        for (int i = v2.size()-1; i >= 0; --i) {
            cout << v2[i] << " ";
        }
        cout << endl;
    }

	return 0;
}