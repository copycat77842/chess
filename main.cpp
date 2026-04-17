#include <iostream>
#include <vector>
void printBoard(std::vector<std::vector<std::string>>& board){
  std::cout << " ";  
  for (int i = 0; i < 8; i++){
    std::cout << " " << char('a' + i) << char('a' + i);
  }
  std::cout << "\n";
  for (int i = 1; i < 9; i++){
    std::cout << i;
    for (int j = 0; j < 8; j++){
        std::cout << " " << board[i - 1][j];
    }
    std::cout << "\n";
  }
}
int main(){
  std::vector<std::vector<std::string>> board(8, std::vector<std::string>(8,"--"));
  printBoard(board);
}
