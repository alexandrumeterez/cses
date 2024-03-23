#include <vector>
#include <string>
#include <iostream>
using namespace std;

bool visited_all_right()

// brute force: generate all paths
#define T 7
void solve(vector<vector<int>> grid, string path, int& answer, int line, int col, int move) {
   
}

int main(void) {
    vector<vector<int>> grid(T, vector<int>(T));
    string path;
    cin >> path;
    int answer = 0;

    solve(grid, path, answer, 0, 0, 0);
    cout << answer << endl;
    return 0l;
}