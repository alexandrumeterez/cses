#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;

bool is_valid(vector<vector<char>> board) {
    vector<vector<int>> positions;
    for(int row = 0 ; row < 8; ++row) {
        for(int col = 0 ; col < 8; ++col) {
            if (board[row][col] == 'x') {
                positions.push_back({row, col});
            }
        }
    }

    for (int i = 0; i < positions.size() - 1; ++i) {
        for (int j = i+1; j < positions.size(); ++j) {
            auto q1 = positions[i];
            auto q2 = positions[j];

            if (q1[0] == q2[0] || q1[1] == q2[1] || abs(q1[0] - q2[0]) == abs(q1[1] - q2[1])) {
                return false;
            }
        }
    }
    return true;
}

void print_board(vector<vector<char>> board) {
    for(int i =0 ; i <8;++i) {
        for(int j = 0; j < 8; ++j) {
            cout << board[i][j];
        }
        cout << endl;
    }
}

void solve(vector<vector<char>> board, set<int> used_rows, set<int> used_cols, int remaining_queens, int& answer) {
    int n = board.size();
    if(!is_valid(board)) {
        return;
    }
    print_board(board);

    if (remaining_queens == 0) {
        cout << "HERE" << answer << endl;
        if (is_valid(board))
            answer += 1;
        return;
    }
    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col) {
            if (used_rows.count(row) != 0 || used_cols.count(col) != 0) {
                continue;
            }
            if (board[row][col] == '.') {
                    // place queen
                    board[row][col] = 'x';
                    used_rows.insert(row);
                    used_cols.insert(col);
                    solve(board, used_rows, used_cols, remaining_queens-1, answer);
                    // dont place queen
                    board[row][col] = '.';
                    used_rows.erase(row);
                    used_cols.erase(col);
                }
        }
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
    cout << "HERadasdas" << endl;
    int answer = 0;
    set<int> used_rows;
    set<int> used_cols;
    solve(board, used_rows, used_cols, 8, answer);
    cout << answer <<endl;
	return 0;
}