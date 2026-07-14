class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {

        int m = board.size();
        int n = board[0].size();

        int liveNeighbours = 0;

        // State Encoding:
        //  0  -> Dead  -> Dead
        //  1  -> Alive -> Alive
        // -1  -> Alive -> Dead
        //  2  -> Dead  -> Alive

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                liveNeighbours = 0;

                // Count neighbours from top and bottom rows
                for (int row = i - 1; row <= i + 1; row += 2) {
                    if (row >= 0 && row < m) {
                        for (int col = j - 1; col <= j + 1; col++) {
                            if (col >= 0 && col < n &&
                                (board[row][col] == 1 || board[row][col] == -1))
                            {
                                liveNeighbours++;
                            }
                        }
                    }
                }

                // Left neighbour
                if (j > 0 &&
                    (board[i][j - 1] == 1 || board[i][j - 1] == -1))
                {
                    liveNeighbours++;
                }

                // Right neighbour
                if (j < n - 1 &&
                    (board[i][j + 1] == 1 || board[i][j + 1] == -1))
                {
                    liveNeighbours++;
                }

                // Apply rules
                if (board[i][j] == 1) {
                    if (liveNeighbours < 2 || liveNeighbours > 3)
                        board[i][j] = -1;
                }
                else {
                    if (liveNeighbours == 3)
                        board[i][j] = 2;
                }
            }
        }

        // Convert temporary states to final states
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == -1)
                    board[i][j] = 0;
                else if (board[i][j] == 2)
                    board[i][j] = 1;
            }
        }
    }
};