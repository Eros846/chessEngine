#include <iostream>
#include <string>
#include <set>

#include "../chessGameHeader/chessGame.hpp"

using namespace std;

int main()
{
    string chessRules = "Pawn The pawn can move only in a forward direction. From its starting position the pawn may be moved one or two squares. However, after that it may be moved only one square at a time. Since the pawn cannot leap over any piece, any chessman directly in front of it blocks further advance of the pawn. A pawn may only capture an enemy piece that is on the square in front of it diagonally. If your pawn is able to reach the end row on the board, you may replace it with any piece (except a king). \nROOK \nThe rook can move either horizontally or vertically (but not both on the same move). \nQUEEN \nThe queen is the strongest piece in the game. It may move in eight directions-commanding all the squares in any of these various directions. It cannot jump over another piece. \nBISHOP \nThe bishop can only move diagonally and in one direction at a move. Each bishop is on a different color and commands that color only. \nCASTLING \nThe only move in the game that allows two pieces to move at once is castling. The two pieces that partake in this are the king and rook. However, there are a few rules that govern this move. A player may 'castle' if: \nA. All the squares between the king and rook are unoccupied. \nB. Neither the rook or king has been moved previously. \nC. None of the opponent's places command the squares between the king and the rook. \nKNIGHT \nThe knight is the only chessman that can move over its own or opponent's pieces. The Knight moves two spaces in a row and one over. \nKING \nThe king may move in any direction-to either color. However, unlike the queen, the king moves \nonly one square at a time. Since the object of the game is to capture the king, the king is not allowed to be moved to a square where he would be liable to be captured by an opposing piece. \nCHECKMATE \nTo win the game of chess, a player must capture the opponent's king. This is known as 'Checkmating' the king. Whenever the king is attacked, he is in check and must be so warned by the opponent. To get out of check the player may either: capture the attacking piece; move the king out of danger; or put another piece\nbetween the attacking chessman and his king. \nDRAWN GAME \nA game is drawn when: \nA. One player cannot 'Checkmate' the other. \nB. There is a 'stalemate.' This happens when a king is not in check, but when his \nonly move (with the king) puts him into check. This differs from a 'checkmate,' where the king is already in check before moving.";
    char userOption = 0;
    bool userValid = false;

    set<string> userProfiles;
    string userUsername = " ";
    string userPassword = " ";
    bool usernameValid = false;
    bool passwordValid = false;

    string player1Username = " ";
    string user1Password = " ";          //dont need?
    string player2Username = " ";
    string user2Password = " ";         //dont need?
    bool user1Valid = false;
    bool user2Valid = false;


    cout << "Hello, welcome to our chess game!" << endl << endl;
    while(userValid == false)                                                                   //while user input is invalid, keep asking for valid input
    {
        cout << "1. Rules of Chess. \n2. Create profile. \n3. Play a two player match. \n4. Exit program." << endl;
        cout << "Select an option:" << endl;
        cin >> userOption;                                                                      //Get user input
        cin.ignore(256,'\n');
        if (userOption != '1' && userOption != '2' && userOption != '3' && userOption != '4')                                             //Validate user input
        {
            cout << "Please enter a valid input" << endl;
        }
        else                                                                                    //If invalid, repeat while loop, if valid continue
        {
            if (userOption == '1')
            {
                cout << "Rules of Chess:" << endl;
                cout << chessRules << endl << endl;
            }

            if (userOption == '2')
            {
                cout << "You entered option 2." << endl;
    
                while(usernameValid == false)
                {
                    cout << "Enter a username between 4 and 20 characters: (Duplicates will be deleted)" << endl;
                    cin >> userUsername;                                                                      //Get user input
                    cin.ignore(256,'\n');
                    if(userUsername.length() < 4 || userUsername.length() > 20)                               //if less than four or greater than 20, stop. if betweem, continue
                    {
                        cout <<  "Please enter a valid username!" << endl;
                    }
                    else
                    {
                        usernameValid = true;
                        userProfiles.insert(userUsername);                                                                  //once validated,  insert to set
                        cout << "Your username is " << userUsername << ". Write it down if you need." << endl;
                    }
                }

                // while(passwordValid == false)
                // {
                //     cout << "Enter a password between 12 and 20 characters:" << endl;
                //     cin >> userPassword;                                                                        //Get user input
                //     cin.ignore(256,'\n');
                //     if(userPassword.length() < 12 || userPassword.length() > 20)                                //if less than 12 or greater than 20, stop. if between, continue
                //     {
                //         cout <<  "Please enter a valid password!" << endl;
                //     }
                //     else
                //     {
                //         passwordValid = true;
                //         userProfiles.insert(pair<string, string> (userUsername, userPassword));
                //         cout << "Your password is " << userPassword << ". Write it down if you need." << endl;
                //     }
                // }

        
                //pre test
                // for (auto itr = userProfiles.begin(); itr != userProfiles.end(); ++itr)
                // {
                //     cout << "Username: " << *itr << endl;
                // }
                usernameValid = false;                                                                          //Reset to validate future usernames
                // passwordValid = false;
            }

            if (userOption == '3')
            {
                cout << "You entered option 3." << endl;
                while (user1Valid == false)
                {
                cout << "Player 1, Enter an existing username and password or type x to go back to main menu and make one" << endl;
                cin >> player1Username;
                if(player1Username == "x")
                {
                    goto exit;
                }
                else if(userProfiles.find(player1Username) == userProfiles.end())        //Check username exists in database
                {
                    cout << "Username not found. Try again." << endl;                   //clears set after exiting program
                }
                else
                {
                    user1Valid = true;
                }
                }

                while (user2Valid == false)
                {
                cout << "Player 2, Enter an existing username and password or type x to go back to main menu and make one" << endl;
                cin >> player2Username;
                if(player2Username == "x")
                {
                    goto exit;
                }
                else if(userProfiles.find(player2Username) == userProfiles.end() || player2Username == player1Username)        //Check username exists in database
                {
                    cout << "Username not found. Try again." << endl;                                                           //clears set after exiting program
                }
                else
                {
                    user2Valid = true;
                }
                }
                
                //Now that users have been validated, start chess game
                chessGame game1;
                int userMoveCounter = 1;
                int userPiece1;
                int userPiece2;
                int userMove1;
                int userMove2;
                bool user1PValid = false;
                bool user1MValid = false;
                bool user2PValid = false;
                bool user2MValid = false;

                while(gameStatus::IN_PROGRESS == game1.getGameStatus())         // signals the game has not ended
                {
                    game1.startGame();
                    if(userMoveCounter % 2 == 1)
                    {   
                        //while(user1PValid == false)
                        //{

                            cout << "Player 1, enter the row of the white piece you want to move:";
                            cin >> userPiece1;
                            cout << "Player 1, enter the column of the white piece you want to move:";
                            cin >> userPiece2;
                            //if(game1.board[userPiece1][userPiece2] == "White")       //use the two characters in string user input as row/col for the matrix
                            //{
                                //user1PValid = true;
                            //}
                            //check valid, check user piece color is white
                            // else
                            // {
                            //     cout << "Please enter a valid white piece!" << endl;
                            //}
                        //}
                        cout << "Player 1, enter the row where you want to move " << userMove1 << ": ";
                        cin >> userMove1;
                        cout << "Player 1, enter the column where you want to move " << userMove2 << ": ";
                        cin >> userMove2;
                        game1.makeMove(userPiece1, userPiece2, userMove1, userMove2, true);

                        //function prints updated board after user move, needs to check after every move. Otherwise, player can make a move after a "checkmate" has already happened
                        if(game1.moveSucess())
                        {
                            userMoveCounter++;
                        }
                    }
                    if(userMoveCounter % 2 == 0)
                    {
                        // while(user2PValid == false)
                        // {
                            cout << "Player 2, enter the row of the black piece you want to move:";
                            cin >> userPiece1;
                            cout << "Player 2, enter the column of the black piece you want to move:";
                            cin >> userPiece2;
                            // if(game1.board[userPiece1][userPiece2].color == "Black")       //use the two characters in string user input as row/col for the matrix
                            // {
                            //     user2PValid = true;
                            // }
                            // //check valid, check user piece color is black
                            // else
                            // {
                            //     cout << "Please enter a valid black piece!" << endl;
                            // }
                        }
                        cout << "Player 2, enter the row where you want to move " << userMove1 << ": ";
                        cin >> userMove1;
                        cout << "Player 2, enter the column where you want to move " << userMove2 << ": ";
                        cin >> userMove2;
                        game1.makeMove(userPiece1, userPiece2, userMove1, userMove2, false);

                        //function prints updated board after user move, needs to check after every move. Otherwise, player can make a move after a "checkmate" has already happened
                        if(game1.moveSucess())
                        {
                            userMoveCounter++;
                        }
                    }
                }
                //Print match history after match is over
                game1.printMoveHistory();
                user1Valid = false;                                                                              //
                user2Valid = false;                                                                             //Reset for future games in the same terminal
            }
            exit:
            if (userOption == '4')
            {
                cout << "You entered option 4." << endl;
                userValid = true;
            }
        }
    }
    
    return 0;
}
