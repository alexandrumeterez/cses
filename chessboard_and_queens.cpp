#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;

void count(vector<vector<char>> board, vector<vector<int>> queens, int line, int& answer) {
    if (queens.size() == 8) {
        answer++;
        return;
    }

    for (int col = 0; col < 8; ++col) {
        if (board[line][col] != '.') continue;
        // check if anything 
        bool skip = false;
        for (auto q: queens) {
            if (q[1] == col) { //check if another queen on same column
                skip = true;
                break;
            }

            if ((line + col == q[0] + q[1]) || (line - col == q[0] - q[1])) {
                //diag
                skip = true;
                break;
            }
        }
        if (skip) continue;

        // recurse
        char prev = board[line][col];
        board[line][col] = 'q';
        queens.push_back({line, col});
        count(board, queens, line+1, answer);
        board[line][col] = prev;
        queens.pop_back();
    }
    
}

int main(void) {
    vector<vector<char>> board(8, vector<char>(8));
    int n = 8;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> board[i][j];
        }
    }

    vector<vector<int>> queens;
    int answer = 0;
    count(board, queens, 0, answer);
    cout << answer << endl;
	return 0;
}