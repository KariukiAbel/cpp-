#include <iostream>	// system definitions
#include <cstdlib>		// I/O definitions
using namespace std;	// make std:: accessible

const int X=1,O=-1,EMPTY=0;	// possible marks
int board[3][3];		// playin board
int currentPlayer; // current player (X or O)

void clearBoard(){		// clear board
	for (int i = 0; i < 3; ++i)
		for(int j=0;j<3;j++)
			board[i][j]=EMPTY;	//every cell is empty
	currentPlayer=X;	// player X starts
}

void putMark(int i,int j){		// mark row i and column j
	board[i][j]=currentPlayer;	// mark with current player
	currentPlayer=-currentPlayer;	// switch players
}

bool isWin(int mark){		// is mark the winner ?
	int win=3*mark;
	return ((board[0][0] + board[0][1] + board[0][2] == win)// row 0
	|| (board[1][0] + board[1][1] + board[1][2] == win)		// row 1
	|| (board[2][0] + board[2][1] + board[2][2] == win)		// row 2
	|| (board[0][0] + board[1][0] + board[2][0] == win)		// column 0
	|| (board[0][1] + board[1][1] + board[2][1] == win)		// column 1
	|| (board[0][2] + board[1][2] + board[2][2] == win)		// column 2
	|| (board[0][0] + board[1][1] + board[2][2] == win)		// diagonal
	|| (board[2][0] + board[1][1] + board[0][2] == win));	// diagnol
}

int getWinner(){	// empty means tie
	if(isWin(X))return X;
	else if(isWin(O))return O;
	else return EMPTY;
}

void printBoard(){		// print the board
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			switch(board[i][j]){
				case X: cout<<"X";break;
				case O: cout<<"O";break;
				case EMPTY: cout <<" "; break;
			}
			if(j<2) cout<< "|";		// column boundary
		}
		if(i<2) cout<<"\n-+-+-\n";	// row boundary
	}

}

int main(){			// main program
	clearBoard();	// clear the board
	putMark(0,0);	// add the marks
	putMark(1,1);
	putMark(0,1);
	putMark(0,2);
	putMark(2,0);
	putMark(1,2);
	putMark(2,2);
	putMark(2,1);
	putMark(1,0);
	printBoard();	// print the final board

	int winner = getWinner();

	if(winner!=EMPTY)
		cout<< " " <<(winner== X ? 'x':'o')<<" wins" << endl;
	else
		cout<<" Tie " <<endl;
	return EXIT_SUCCESS;
}



