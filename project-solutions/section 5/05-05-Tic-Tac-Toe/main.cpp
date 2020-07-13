#include <iostream>
#include <string>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void runGame();
void initializeGameBoard(string gameBoard[ROWS][COLS]);
void printCurrentBoard(string gameBoard[ROWS][COLS]);
void getUserInput(bool xTurn, string gameBoard[ROWS][COLS]);
bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS]);
string getWinner(string gameBoard[ROWS][COLS]);
bool isBoardFull(string gameBoard[ROWS][COLS]);

int main()
{
	runGame();

	return 0;
}//end main


//-------------------------------------------------//
//----------| the game loop - runGame |------------//
//-------------------------------------------------//
void runGame()
{
	string winner = "";
	bool xTurn = true; //start with X's turn
	int theRow = 0;
	int theCol = 0;
	string gameBoard[ROWS][COLS];

	initializeGameBoard(gameBoard);
	
	//initial print
	printCurrentBoard(gameBoard);

	while (winner == "")
	{
		if (xTurn)
		{
			cout << "It is X's turn" << endl;
		}
		else
		{
			cout << "It is O's turn" << endl;
		}
		getUserInput(xTurn, gameBoard);
		cout << endl;  //extra spacing
		printCurrentBoard(gameBoard); //reprint the board
		winner = getWinner(gameBoard);  //check for a winner
		xTurn = !xTurn;  //flip it

		if (winner == "" && isBoardFull(gameBoard))
		{
			winner = "C";  //Cat's game... no winner!
		}
	}//end while

	//cat's game?
	cout << endl;  //extra space before
	if (winner == "C")
	{
		cout << "It was the Cat's game!  NO WINNER!" << endl;
	}
	else {
		cout << "The winner is " << winner << endl;  //print's X or O
	}
	cout << endl;  //extra space
}

//-------------------------------------------------//
//------------| initialize the board |-------------//
//-------------------------------------------------//
void initializeGameBoard(string gameBoard[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			gameBoard[i][j] = " "; //empty space
		}
	}
}//end initialize game board


//-------------------------------------------------//
//----------| print the current board |------------//
//-------------------------------------------------//
void printCurrentBoard(string gameBoard[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << gameBoard[i][j];
			if (j < 2)
			{
				cout << " | ";
			}
		}
		cout << endl;
		if (i < 2)
		{
			cout << "- - - - -" << endl;
		}
	}

	cout << endl;  //extra spacing
}//end print the current board

//-------------------------------------------------//
//------| get user input and place symbol |--------//
//-------------------------------------------------//
void getUserInput(bool xTurn, string gameBoard[ROWS][COLS])
{
	int row = -1;
	int col = -1;
	bool keepAsking = true;
	while (keepAsking)
	{
		//keep asking until you get a valid answer
		cout << "Please enter the row THEN the column, each from 0, 1, or 2, separated by a space" << endl;
		cin >> row;
		cin >> col;
		if (row >= 0 && col >= 0 && row <= 2 && col <= 2)
		{
			//valid/in-range selection
			//but it STILL could be occupied by an X or O already...
			if (!cellAlreadyOccupied(row, col, gameBoard))
			{
				//only set the cell if the row/col is valid AND not occupied
				keepAsking = false;
			}
			else 
			{
				cout << "That cell is already occupied!" << endl;
			}
		}
	}//end while

	//by the time it gets here, we know it's a VALID row and col,
	//in range, and not already occupied!
	if (xTurn)  //must be an X
	{
		gameBoard[row][col] = "X";
	}
	else  //must be an O
	{
		gameBoard[row][col] = "O";
	}

}//end getUserInput

//-------------------------------------------------//
//------| test if cell is already occupied |-------//
//-------------------------------------------------//
bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS])
{
	return gameBoard[row][col] != " ";  //if not a space, then it's occupied
}//end cellAlreadyOccupied

//-------------------------------------------------//
//------| test if cell is already occupied |-------//
//-------------------------------------------------//
string getWinner(string gameBoard[ROWS][COLS])
{
	//check rows
	for (int i = 0; i < ROWS; i++)
	{
		if (gameBoard[i][0] != " " && gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][1] == gameBoard[i][2])
		{
			return gameBoard[i][0];  //we have a match (horizontal)!
		}
	}//end for

	//check columns
	for (int i = 0; i < COLS; i++)
	{
		if (gameBoard[0][i] != " " && gameBoard[0][i] == gameBoard[1][i] && gameBoard[1][i] == gameBoard[2][i])
		{
			return gameBoard[0][i];  //we have a match (vertical)!
		}
	}//end for

	//check diagonals
	//there are two diagonals, which we can test manually / no-loop
	
	//upper-left to bottom right diagonal
	if (gameBoard[0][0] != " " && gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2])
	{
		return gameBoard[0][0];  //we have a diagonal match!
	}

	//lower-left to upper right diagonal
	if (gameBoard[2][0] != " " && gameBoard[2][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[0][2])
	{
		return gameBoard[2][0];  //we have a diagonal match!
	}

	//if we get to here...
	return "";  //no winner yet!
}//end getWinner

//test if board is full
bool isBoardFull(string gameBoard[ROWS][COLS])
{
	int countFill = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (gameBoard[i][j] != " ")
			{
				countFill++;
			}
		}
	}
	
	return countFill == 9;  //all 9 cells are full, then board is full
}