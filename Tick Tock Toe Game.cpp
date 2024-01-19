
/*											<-:::------------[[TASK------03]]------------:::->
									---------------**---------------**-----------------**-----------------
														Tic-Tac-Toe Game
									---------------**---------------**-----------------**-----------------
									
						Build a simple console-based Tic-Tac-Toe game that allows two players to play against each other.
						
--> Game Board: Create a 3x3 grid as the game board.						-->	Players: Assign "X" and "O" to two players.
--> Display Board: Show the current state of the board.	r					-->	Player Input: Prompt the current player to enter their move.
--> Update Board: Update the game board with the player's move.				-->	Check for Win: Check if the current player has won.
--> Check for Draw: Determine if the game is a draw.						-->	Switch Players: Alternate turns between "X" and "O" players.
--> Display Result: Show the result of the game (win, draw, or ongoing). 	--> Play Again: Ask if the players want to play another game. */

#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};			//character array declared for displaying the board numbers.
char turn='X';
int row;
int column;
bool draw=false;

void Intro();
void display_board();
void players_turn();
bool game_over();
void reset_Game();

int main()
{
	char playAgain;
	system("color E0");	
	Intro();			
	do{
		reset_Game();
		while(game_over())
		{
		display_board();
		players_turn();
		game_over();
		} 
		
	if(turn=='X' && draw==false)
	cout<<"\t\t\t\t\t\tCongratulations!!!! ---> Player_2 [O] has won the game! \n";
	else if(turn=='O' && draw==false)
	cout<<"\t\t\t\t\t\tCongratulations!!!! ---> Player_1 [X] has won the game! \n";
	else 
	cout<<"\t\t\t\t\t\t\t ..................Game Draw.....................! (No one is winner)\n";
	 
	cout<<"Do you want to play again? (Y/N): ";
	cin>>playAgain;
	}while(playAgain=='Y' || playAgain=='y');
	
	return 0;
}
void Intro(){								// Intro function to display first_page of Introduction.
	
	cout<<"\t----***----\t\t----***----\t\t----***----\t\t----***----\t\t----***----\t\t----***----\t\t----***----";
	cout<<"\n\n\n\n\n\t\t\t\t\t      --{}{}{}---:::::::--{}{}{}--- TIC-TAC-TOE-GAME --{}{}{}---:::::::--{}{}{}--- "<<endl;
	cout<<"\t\t\t\t\t=========================================================================================="<<endl;
    cout<<"\t\t\t\t\t-----------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t->\t            WELCOME TO TIC ~ TAC ~ TOE ~ GAME                "<<endl;
    cout<<"\n\t\t\t\t\t->\t            MADE BY -> AHSAN ALI (ID == CS11WX154872)                 "<<endl;
    cout<<"\n\t\t\t\t\t->\t             PRESENTED TO CODSOFT                                 "<<endl;
	cout<<"\t\t\t\t\t=========================================================================================="<<endl;
    cout<<"\t\t\t\t\t_________________________________________________________________________________________"<<endl;
    cout<<"Press any key to start the system......!";
	getch();
    
}

void display_board()
{
	system("cls");
	cout<<"\n\n\t\t\t<<<<<<<<<<----------------***---------------- Tic-Tac-Toe Game ----------------***---------------->>>>>>>>>"<<endl<<endl;
	cout<<"\t\t\t\t\t\tPlayer_1 [X] \t\t\t\t\t Player_2 [O]\n\n"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t     |     |     \n";
	cout<<"\t\t\t\t\t\t\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
	cout<<"\t\t\t\t\t\t\t\t\t_____|_____|_____\n";	
	cout<<"\t\t\t\t\t\t\t\t\t     |     |     \n";
	cout<<"\t\t\t\t\t\t\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
	cout<<"\t\t\t\t\t\t\t\t\t_____|_____|_____\n";
	cout<<"\t\t\t\t\t\t\t\t\t     |     |     \n";
	cout<<"\t\t\t\t\t\t\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
	cout<<"\t\t\t\t\t\t\t\t\t     |     |     \n"<<endl;
}

void players_turn()
{
	int choice;
	if(turn=='X')
	cout<<"\t\tPlayer_1 [X] turn: ";
	
	if(turn=='O')
	cout<<"\t\tPlayer_2 [O] turn: ";
	
	cin>>choice;
	switch(choice){
		case 1: row=0; column=0; break;
		case 2: row=0; column=1; break;
		case 3: row=0; column=2; break;	
		case 4: row=1; column=0; break;
		case 5: row=1; column=1; break;
		case 6: row=1; column=2; break;
		case 7: row=2; column=0; break;
		case 8: row=2; column=1; break;
		case 9: row=2; column=2; break;
		
		default: cout<<"\t\t\t\t\tInvalid Choice..!\n";
//		break;
		cout<<"\t\tPress any key to continue...";
		getch();
	}
	if(turn=='X' && board[row][column]!='X'&& board[row][column]!='O')
	{
		board[row][column]='X';
		turn ='O';
	}
	else if(turn=='O'&& board[row][column]!='X'&& board[row][column]!='O')
	{
		board[row][column]='O';
		turn ='X';
	}
	else
	{
		cout<<"Sorry to say ...! You can't choose this box, It's already filled.\n";
		cout<<"Please try again!!";
		getch();
		cout<<endl;
		players_turn();
	}
	display_board();
}

bool game_over()
{	
//						------------- Check Winner..! --------------								
	for(int i=0; i<3; i++)
															//Condition for all Rows && Columns
	if(board[i][0]==board[i][1] && board[i][0]==board[i][2] || board[0][i]==board[1][i] && board[0][i]==board[2][i] )
	return false;
	else if(board[0][0]==board[1][1] && board[0][0] == board[2][2])					//Condition for Right Diagonal Boxes
	return false;
	else if(board[0][2]==board[1][1] && board[0][2]==board[2][0])				   //Condition for Left Diagonal Boxes	
	return false;	
	
//						----------- Check If box is already filled or not box ---------
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	if(board[i][j]!='X' && board[i][j]!='O')
	return true;
	
	draw=true;
	return false;
}

void reset_Game()
{
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	board[i][j]='1'+i*3+j;
	turn ='X';
	draw=false;
}





