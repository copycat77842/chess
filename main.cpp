#include <iostream>
#include <vector>
void printBoard(std::vector<std::vector<std::string>>& board){
  std::cout << " ";  
  for (int i = 0; i < 8; i++){
    std::cout << " " << char('a' + i) << char('a' + i);
  }
  std::cout << "\n";
  for (int i = 8; i > 0; i--){
    std::cout << i;
    for (int j = 0; j < 8; j++){
        std::cout << " " << board[8 - i][j];
    }
    std::cout << "\n";
  }
}
int main(){
  std::vector<std::vector<std::string>> board(8, std::vector<std::string>(8,"--"));
  board[7][0] = "WR"; //Row 1 on the chess board will actually be index 7
  board[7][7] = "WR";
  board[7][1] = "WN"; //We will use N for Knight and K for King
  board[7][6] = "WN";
  board[7][2] = "WB";
  board[7][5] = "WB";
  board[7][3] = "WQ";
  board[7][4] = "WK";
  board[0][0] = "BR"; //Row 8 on the chess board will actually be index 0
  board[0][7] = "BR";
  board[0][1] = "BN"; //We will use N for Knight and K for King
  board[0][6] = "BN";
  board[0][2] = "BB";
  board[0][5] = "BB";
  board[0][3] = "BQ";
  board[0][4] = "BK";
  for (int i = 0; i < 8; i++){
    board[6][i] = "WP";
    board[1][i] = "BP";
  }
  printBoard(board);
}
