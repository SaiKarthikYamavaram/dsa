#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

class IsValidSudoku {
public:
    bool isValidSudoku(std::vector<vector<char>>& board) {
        std::unordered_map<int, int> row,column;
        map<pair<int,int>, int> square;
        int n = board.size(),w;
        pair<int,int> p;
        for (int i = 0;i<n;i++){
            for (int j = 0;j<n;j++){
                if (board[i][j] == '.')continue;
                w = (1<< (board[i][j] - '1'));
                p = {i/3,j/3};
                if((row[i] & w) || (column[j] & w) || (square[p] & w)) return false;
                row[i] = row[i] | w;
                column[j] = column[j] | w;
                square[p] = square[p] | w;
            }
        }
        return true;
    }
};
