/*										<-------------[[TASK------01]]------------->
								---------------**---------------**-----------------**-----------------
														NUMBER GUESSING GAME
								---------------**---------------**-----------------**-----------------
Create a program that generates a random number and asks the user to guess it. 
Provide feedback on whether the guess is too high or too low until the user guesses the correct number */

#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<conio.h>
#include<ctime>
using namespace std;

void Intro();
void Game();
char play_again;

int main() {
	system("color F6");
	Intro();
	do{
		system("cls");
		Game();
        cout<<"Do You want to play again? (Y/N):";
        cin>>play_again;
	}while(play_again!='n' && play_again!='N');
	
}
 
void Intro()
{
	cout<<"\n\n\n\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\t\t\t__||__||____||__||____||__||____||__||____||__||____||__||____||__||____||__||__"<<endl;
	cout<<"\n\t\t\t\t\t  <><><><><> ...     Welcome To Number Guessing Game           ... <><><><><> "<<endl;
	cout<<"\n\t\t\t\t\t  <><><><><> ...   Developed By Ahsan Ali (ID == CS11WX154872) ... <><><><><> "<<endl;
	cout<<"\n\t\t\t\t\t  <><><><><> ...   CodSoft Internship Task (01)                ... <><><><><> "<<endl;
	cout<<"\t\t\t\t\t________________________________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t________________________________________________________________________________"<<endl;
    cout<<"Press Any key!";
	getch();
//	system("cls");

}

void Game()
{
	int secret_number = rand()%15 + 1;
    int guess;
    cout<<"\n\n\t\t\t    <><><><><> ...<><><><><> ...<><><><><>... NUMBER GUESS GAME ...<><><><><> ...<><><><><> ...<><><><><> \n\n\n";
    do {
        cout<<"\t\t\t\tGuess any Number of your own choice b/w (1 and 15): ";
        cin>>guess;

        if (guess<secret_number)
            cout<<"\t\t\t\t\t\t\t\t\tIt's Too Low as compare to secret number (Try again)!\n"<<endl;
        else if(guess>secret_number)
            cout<<"\t\t\t\t\t\t\t\t\tIt's Too High as compare to secret number (Try again)!\n"<<endl;
        else
            cout<<"\t\t\t\t\t\t\t\t\tCongratulations! You guessed the secret number."<<endl;
            
    } while (guess!=secret_number);
}
