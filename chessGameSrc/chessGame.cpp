    #include "../chessGameHeader/chessGame.hpp"

    #include <iostream>

    #include <cctype>

    #include <stdio.h>

    //     private:
    //     std::unique_ptr<chessBoard> board;
    //     std::pair<int, int> whiteKingPosition;
    //     std::pair<int, int> blackKingPosition;
    //     vector<string> moves;

    chessGame::chessGame(): board(std::make_unique < chessBoard > ()) {

      whiteKingPosition.first = 7;
      whiteKingPosition.second = 4;

      blackKingPosition.first = 0;
      blackKingPosition.second = 4;

    }

    //     void startGame();
    void chessGame::startGame() {
      board.get() -> setupBoard();
      board.get() -> displayBoard();
    }

    //     void makeMove(int sourceX, int sourceY, int targetX, int targetY);

    void chessGame::makeMove(int sourceX, int sourceY, int targetX, int targetY, bool white) {

      Piece * sourcePiece = board.get() -> getSquare(sourceX, sourceY) -> getPiece();
      Piece * targetPiece = board.get() -> getSquare(targetX, targetY) -> getPiece();

      if (sourcePiece == nullptr) {
        cout << "There is no piece to make a move. Please check your board." << endl;
        lastMove = false;
      }

      if (targetPiece != nullptr && targetPiece -> getColor() == sourcePiece -> getColor()) {
        cout << "Can't capture piece of the same color. Please refer to rules" << endl;
        lastMove = false;
        return;
      }

      // check turn 
      char symbol = sourcePiece -> getSymbol()[0];
      if (white) {
        if (!isupper(symbol)) {
          cout << "Please move your own piece. Thank you!";
          lastMove = false;
          return;
        } else {
          if (!islower(symbol)) {
            cout << "Please move your own piece. Thank you!";
            lastMove = false;
            return;
          }
        }
      }

      if (white) {
        //implement white king's function
      } else {
        //implement black king's function
      }

      if (sourcePiece -> getSymbol() == "P" || sourcePiece -> getSymbol() == "p") {

        if (board.get() -> EnPassantPossible(sourceX, sourceY, targetX, targetY)) {
          board.get() -> perfomEnPassant(sourceX, sourceY, targetX, targetY);
          moves.push_back(getStringOfMove(targetX, targetY));
          lastMove = true;
          return;
        }
        if (board.get() -> pawnPromotionPossible(sourceX, sourceY, targetX, targetY)) {
          board.get() -> performPawnPromotion(sourceX, sourceY, targetX, targetY);
          moves.push_back(getStringOfMove(targetX, targetY));
          lastMove = true;
          return;
        }

      }

    }

    //     void updateGameStatus();

    void chessGame::updateGameStatus() {
        //To implement
    }

    //     gameStatus getGameStatus() const;

    gameStatus chessGame::getGameStatus() const {
      //To implement
      return gameStatus::IN_PROGRESS;
    }

    string chessGame::getStringOfMove(int targetX, int targetY) const {
      // Convert the y-coordinate to a file character ('a' through 'h')
      char charX = 'a' + targetY;
      // Convert the x-coordinate to a rank number (8 through 1)
      // Since targetX ranges from 0 (representing rank 8) to 7 (representing rank 1)
      int positionY = 8 - targetX;

      // Construct the string representing the move
      string moveString = charX + to_string(positionY);

      return moveString;

    }

    //     void addMoves(int col, int row);
    void chessGame::addMoves(int row, int col) {
      string moveName = getStringOfMove(row, col);
      moves.push_back(moveName);
    }

    //     void printMoveHistory();
    void chessGame::printMoveHistory() {
      for (int i = 0; i < moves.size(); ++i) {
        cout << moves[i];
        // Print a space if it's the first move in a pair, or a newline if it's the second
        if (i % 2 == 0) {
          std::cout << " ";
        } else {
          cout << endl;
        }
      }

      // If there's an odd number of moves, add a newline at the end
      if (moves.size() % 2 != 0) {
        cout << endl;
      }

    }

    bool chessGame::moveSucess() {
      return this -> lastMove;
    }

    void chessGame::updateKingPosition(Color col, int x, int y) {
      //To implement
    }