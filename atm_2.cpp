#include <iostream>
using namespace std;


void menu() {
	int option;
		cout << "Welcome!\n";
		cout << "1. Withdraw\n";
		cout << "2. Deposit\n";
		cout << "3. Check balance\n";
		cout << "4. Exit\n";
	
	/*	cout<<"Select your option: ";
		cin>>option;
		cin.ignore(); */
	    }

int main()
{


	int pin;
	int pin1;
	int option;
	int balance = 100;

	cout << "Create pin: ";
	cin >> pin;

	cout << "Pin saved!" << endl;	
	cout << "Enter PIN number to access account: ";
	cin >> pin1;
	cin.ignore();

	if (pin1 != pin)
	{
		cout<<"Wrong PIN. Try Again: ";
		cin>>pin1;
		cin.ignore();
	}
	if (pin1 != pin)
	{
		cout << "Wrong PIN. Try Again: ";
		cin >> pin1;
		cin.ignore();

	if (pin1 != pin)
		{
			cout << "Wrong PIN. Ending session. " << endl;
			return 0;
		}
		else

		{

		}

	}

	 if(pin1 == pin)

		menu();
		cout<<"Select your option: ";
		cin>>option;
		cin.ignore();


	while ((option == 1)||(option == 2)||(option == 3)||(option == 4))
 
	{
	switch(option)

	case 1:
	{
		cout<<"Amount to withdraw($): ";
		cin>>option;
		cin.ignore();


	if(option<=100)
	{
	balance -= option;
	cout << "Your balance is now $" << balance << "." << endl;
	cout << "Press enter to continue.";
	cin.get();
	
	menu();
	cout << "Select your option: ";
		cin >> option;
		

	}


//	while (option>100)
	else if (option>100)
	{
//	while(option>100){

		cout << "Withdrawal amount exceeds balance! Available balance is $100." << endl;
	}

		cout << "Amount to withdrawal: ";
		cin >> option;
		cin.ignore();
		balance -= option;
		cout << "Your balance is now "<<"$"<< balance <<"."<<endl;
		cout << "Press enter to continue."<<endl;
		cin.get();
		 
		menu();
		cout << "Select your option: ";
		cin >> option;
		

	}

		break;

=

	case 2:
		cout << "Amount to deposit($): ";
		cin >> option;
		cin.ignore();
		balance += option;
		cout << "Your balance is now: $" << balance << "." << endl;
		cout << "Press Enter to continue."<<endl;
		cin.get();
		
		menu();
		cin >> option;

		break;




	case 3:
		cout << "Your current balance is " << "$" << balance<<endl;
		cout << "Press Enter to continue." << endl;
		cin.get();
		menu();
		cin >> option;
		break;


	case 4:
		cout << "Have a nice day!"<<endl;
		return 0;


		}
	}


	return 0;
}

