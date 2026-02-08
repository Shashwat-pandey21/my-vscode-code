#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<string>> ans;

bool isSafe(int row, int col, vector<string>& board) {
    // same column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q') return false;
    }

    // upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') return false;
    }

    // upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q') return false;
    }

    return true;
}

void solve(int row, vector<string>& board) {
    // base case
    if (row == n) {
        ans.push_back(board);   // store board
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(row, col, board)) {
            board[row][col] = 'Q';
            solve(row + 1, board);
            board[row][col] = '.'; // backtrack
        }
    }
}

int main() {
    cout << "Enter value of n: ";
    cin >> n;

    vector<string> board(n, string(n, '.'));
    solve(0, board);

    cout << "\nTotal solutions: " << ans.size() << "\n\n";

    for (int i = 0; i < ans.size(); i++) {
        cout << "Solution " << i + 1 << ":\n";
        for (string row : ans[i]) {
            cout << row << "\n";
        }
        cout << "\n";
    }

    return 0;
}
