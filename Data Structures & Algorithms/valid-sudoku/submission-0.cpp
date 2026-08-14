class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return isValidRow(board) &&  isValidColumn(board) && isValidBox(board);
    }
    bool isValidRow(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            unordered_set<int> st;
            int count = 0;
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    count++;
                    st.insert(board[i][j]);
                }
            }
            if(st.size() != count) return false;
        }
        return true;
    }
    bool isValidColumn(vector<vector<char>>& board) {
       for(int i = 0; i < 9; i++){
            unordered_set<int> st;
            int count = 0;
            for(int j = 0; j < 9; j++){
                if(board[j][i] != '.'){
                    count++;
                    st.insert(board[j][i]);
                }
            }
            if(st.size() != count) return false;
        }
        return true; 
    }
    bool isValidBox(vector<vector<char>>& board) {
         for(int x = 0; x < 3; x++){
            for(int y = 0; y < 3; y++){
                unordered_set<int> st;
                int count = 0;
                for(int i = 3 * x; i < 3 * x + 3; i++){
                    for(int j = 3 * y; j < 3 * y + 3; j++){
                        if(board[j][i] != '.'){
                            count++;
                            st.insert(board[j][i]);
                        }
                    }
                }
                if(st.size() != count) return false;
            }
         }
         return true;
    }
};
