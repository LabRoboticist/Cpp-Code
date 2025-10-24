#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

struct Cell {
    int row;
    int col;
};

class Board {
private:
    char grid[ROWS][COLS];
    Cell c[9];
public:

    //FUNCTION OVERLOADING
    // Default constructor to initialize the board
    Board();
    // Copy constructor
    Board(const Board &b);

    Board(char grid[3][3]);

    // Function to place a piece on the board
    void PlacePiece(char xo, Cell c);

    // Function to get the piece's char from c
    char getPiece(Cell c);
    
    void displayBoard();
    Cell getCell(Cell c[], int i); //do 
	void indicate();
};


bool validateCell(Board &b, Cell c);
int getRow(Cell c);
int getCol(Cell c);

void setRow(Cell &c);
void setCol(Cell &c);


Board::Board() { 
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLS; ++j) {
			grid[i][j] = ' '; // Empty cell
		}
	}
}

Board::Board(const Board &b) { //defining board
	for (int i = 0; i < ROWS; ++i) { //filing out first dimension
		for (int j = 0; j < COLS; ++j) {//filing out second dimension
			grid[i][j] = b.grid[i][j]; // Copy each cell
		}
	}
}

Board::Board(char grid[3][3]){
	int k=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			grid[i][j]=grid[i][j];
			c[k].row=i; 
			c[k].col=j;
			k++;
		}
	}
}

Cell Board::getCell(Cell c[],int i){
    return c[i];
}
void Board::PlacePiece(char xo, Cell c) {
	grid[c.row][c.col] = xo; //setting location
}

char Board::getPiece(Cell c) {
	return grid[c.row][c.col]; //return position values
}

void Board::displayBoard() {
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLS; ++j) {
			cout << grid[i][j];
			if (j < COLS - 1) cout << "|";
		}
		cout << endl;
		if (i < ROWS - 1) cout << "-----\n";
	}
}

void Board::indicate() {
    cout << "\n\nCoordinates of the cells on the board:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "(" << i << "," << j << ")";
            if (j < COLS - 1) cout << " | ";
        }
		if (i!=2){
		cout << "\n------ ------- -------";
		}
        cout << endl;
    }
	cout << "\n";
}

int getRow(Cell c){return c.row;}
int getCol(Cell c){return c.col;}

void setRow(Cell &c) {
    cout << "Enter row (0-2) (x position): ";
    cin >> c.row;
}

void setCol(Cell &c){
    cout << "Enter column (0-2) (y position): ";
    cin >> c.col;
}

bool validateCell(Board &b, Cell c) {
    if (c.row < 0 || c.row >= ROWS || c.col < 0 || c.col >= COLS) { //if wrong
        return false; // Invalid given row/col postion for cell
    }
    if (b.getPiece(c) != ' ') {
        return false; 
    }
    return true; //if no bad things then everything good
}

bool Whowon(Board board){
    for (int i = 0; i < ROWS; ++i) {
        //({x,y}) cell coordinates
        // Horizontal win (i = same row)
        if (board.getPiece({i, 0}) == board.getPiece({i, 1}) && board.getPiece({i, 1}) == board.getPiece({i, 2}) && board.getPiece({i, 0}) != ' ') {
            //cout << "Horizontal win!\n";
            return true;
        }
        // verticle win (i = smae col)
        if (board.getPiece({0, i}) == board.getPiece({1, i}) && board.getPiece({1, i}) == board.getPiece({2, i}) && board.getPiece({0, i}) != ' ') {
            //cout << "Verticle win!\n";
            return true;
        }
    }
    
    if (board.getPiece({0, 0}) == board.getPiece({1, 1}) && board.getPiece({1, 1}) == board.getPiece({2, 2}) && board.getPiece({0, 0}) != ' ') {
        //cout << "-X diagnel win!\n";
        return true;
    }
    if (board.getPiece({0, 2}) == board.getPiece({1, 1}) && board.getPiece({1, 1}) == board.getPiece({2, 0}) && board.getPiece({0, 2}) != ' ') {
        //cout << "+X diagnel win!\n";
        return true;
    }
    return false;
}  


void play(){
    bool gameover=false;
	Board board;
	Cell c1[9], c2[9];
	char p1='X',p2='O';
    do{
        for(int i=0;i<3;i++){
            cout << "Player 1 (X)";
            setRow(c1[i]); 
            setCol(c1[i]); 
            // Validate cell before placing the piece
            if (validateCell(board, c1[i])) {
                board.PlacePiece(p1, c1[i]);
                board.displayBoard();
                if(Whowon(board)){
                    cout << "\nPlayer 1 (X) won!\n";
                    break;
                    }
                cout << "\n";
            } else {
                cout << "Invalid cell or cell already occupied!" << endl;
            }

            cout << "Player 2 (O)";
            setRow(c2[i]); 
            setCol(c2[i]); 
            if (validateCell(board, c2[i])) {
                board.PlacePiece(p2, c2[i]);
                if(Whowon(board)){
                    cout << "\nPlayer 2 (O) won!\n";
                    break;
                    }
                board.displayBoard();
                cout << "\n";
            } else {
                cout << "Invalid cell or cell already occupied!" << endl;
            }
        }

        gameover=true;
    }while(!gameover);
    cout << "\n\n---Final Results---\n";
	board.displayBoard();	
}


int main() {
	Board board;
    char choice;
    do{
	board.indicate();
	play();
    cout<< "\n\n\nWhat to play again? (y/n) \n";
    cin >> choice;
    }while (choice=='y');   
	return 0;	
}
