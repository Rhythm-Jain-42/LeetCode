class Solution {
public:
    bool search(int i, int j, int index, vector<vector<char>>& board, string word) {
        if (index == word.length())
            return true;
        
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index])
            return false;
        
        char original = board[i][j];
        board[i][j] = '#';
        
        bool found = search(i, j + 1, index + 1, board, word) ||
                     search(i, j - 1, index + 1, board, word) ||
                     search(i + 1, j, index + 1, board, word) ||
                     search(i - 1, j, index + 1, board, word);
        
        board[i][j] = original;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == word[0]) {
                    if (search(i, j, 0, board, word))
                        return true; 
                }
            }
        }
        return false; 
    }
};