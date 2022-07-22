//Dapo Otepola-Bello
//12-18-2020
#include<iostream>
#include<ctime>
using namespace std;

int computerChoice();
void winner(int compChoice, int playerChoice);

int main()
{	
	//string choice, computer;
	int choice;

	//do
	//{
	cout << "1-Rock | 2-Paper | 3-Scissors" << endl;
	cout << "Make selection: ";
	cin >> choice;

	int secChoice = computerChoice();
	winner(secChoice, choice);
	//winner(compChoice, choice);
	//}

	return 0;
}

int computerChoice()
{
	return rand() % 3 + 1;
}

void winner(int computerChoice, int playerChoice)
{
	if(playerChoice == computerChoice)
	{
		cout << "It was a tie!" << endl;
		main();
	}
	if (computerChoice == 3)
		cout << "Computer chose scissors" << endl;
	else if (computerChoice == 2)
		cout << "Computer chose paper" << endl;
	else
		cout << "Compuer chose rock" << endl;

	if ((playerChoice == 1 && computerChoice == 3) || 
(playerChoice == 2 && computerChoice == 1) || (playerChoice == 3 && computerChoice == 2))
		cout << "You won!" << endl;
	else
		cout << "You lost!" << endl;

	return;
}
