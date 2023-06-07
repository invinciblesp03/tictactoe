/**************************************************************
* Programmer Name:Shree Prakash Shah
* File Name: tictactoe
* Date of Last Modification: 12/14/2021 A.D.
* Description:The following program is tic tac toe game which includes player-X and player -O.
* A disply board is shown in the output with three rows and three columns with 9 different positions
 to be filled that are indicated by number 1 to 9.
*
**************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

//Array for the game board
char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };

//Variable Declaration for the 3x3 tic tac toe game.
int choice;
int row, column;
char turn = 'X';
bool draw = false;



// function to get player input and update the board.

void display_board() {

    //Game Board LAYOUT is listed below in slash format.



    cout << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << board[0][0] << "  | " << board[0][1] << "   |  " << board[0][2] << " " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[1][0] << "  | " << board[1][1] << "   |  " << board[1][2] << " " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[2][0] << "  | " << board[2][1] << "   |  " << board[2][2] << " " << endl;
    cout << "     |     |     " << endl;
}



// function to compute the input and it's result in the 3 by 3 board.



void player_turn() {

    cout << endl;

    cout << "                ***********************(((((PLAYER 1: [x])))))) and ((((( PLAYER 2:[0])))))))*****************" << endl;
    cout << endl;





    cout << endl;
    cout << endl;



    if (turn == 'X') {
        cout << "#################-Please, Player - 1 [X] turn -------------: ";
    }
    else if (turn == 'O') {
        cout << "#################_please, Player - 2 [O] turn -------------: ";
    }
    //Taking input from user
    //updating the board according to choice and reassigning the turn Start

    cin >> choice;

    //switch case to get which row and column will be update

    switch (choice) {
    case 1: row = 0; column = 0; break;
    case 2: row = 0; column = 1; break;
    case 3: row = 0; column = 2; break;
    case 4: row = 1; column = 0; break;
    case 5: row = 1; column = 1; break;
    case 6: row = 1; column = 2; break;
    case 7: row = 2; column = 0; break;
    case 8: row = 2; column = 1; break;
    case 9: row = 2; column = 2; break;
    default:
        cout << "Invalid Move";
    }

    if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O') {
        //updating the position for 'X' symbol if
        //it is not already occupied
        board[row][column] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O') {
        //updating the position for 'O' symbol if
        //it is not already occupied
        board[row][column] = 'O';
        turn = 'X';
    }
    else {
        //if input position already filled
        cout << endl;
        cout << endl;
        cout << "----------------Box already filled .Please choose another number again, (TRY AGAIN)---------------------";
        player_turn();
    }
    /* Ends */
    system("cls");

}

//Function to get the game status e.g. GAME WON, GAME DRAW GAME IN CONTINUE MODE

bool gameover() {
    //checking the win for Simple Rows and Simple Column
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return false;

    //checking the win for both diagonal

    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return false;

    //Checking the game is in continue mode or not
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;

    //Checking the if game already draw
    draw = true;
    return false;
}

//Program Main Method

int main()
{
    // Decoration of the game header is listed below

    cout << "                                    **************-------WELCOME TO----*****************             " << endl;
    cout << "" << endl;
    cout << "                                    ********* SHREE PRAKASH TIC TAC TOE GAME ************           " << endl;
    cout << endl;
    cout << "                            -------@@@@@----------THIS IS A TWO PLAYER GAME.-----------@@@@@-----------" << endl;
    cout << endl;

    cout << "                              @@@@@@@@@@@@@@@@@@@@@   LETS BEGIN THE GAME   @@@@@@@@@@@@@@@@@" << endl;

    cout << endl;
    cout << "                        TO PLAY THE GAME ENTER THE NUMBER OF THE BOXES WHERE YOU WANT TO PUT YOUR TURN" << endl;
    cout << endl;

    cout << "                              --------------------------GOOD***LUCK***---------------------------------" << endl;

    cout << endl;
    cout << endl;



    // while loop for the game 

    while (gameover()) {
        display_board();
        player_turn();
        gameover();
    }
    if (turn == 'X' && draw == false) {
        cout << "---------------------------------------------------------------------" << endl;
        cout << "Congratulations!Player with 'O'(player Two) has won the game" << endl;
        cout << endl;
        cout << "You are the winner " << endl;
    }
    else if (turn == 'O' && draw == false) {
        cout << "-----------------------------------------------------------------------" << endl;
        cout << "Congratulations!Player with 'X'(player One) has won the game" << endl;

        cout << endl;

        cout << "You are the winner." << endl;
    }
    else
        cout << "GAME DRAW!!! No one won ";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

}
/**************************************************************
* /////////////////////////////// END OF PROJECT ////////////////////
*
**************************************************************/
