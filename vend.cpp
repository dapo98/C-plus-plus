//Dapo Otepola-Bello
#include <iostream>
#include <iomanip>
using namespace std;

	

	const string item_a = "Juicy Fruit",item_b = "Doritos", item_c = "Pop-Tarts", item_d = "Beef Jerky";
	const float item_a_cost = 0.55, item_b_cost = 0.90, item_c_cost = 1.35, item_d_cost = 1.50;
	const int width = item_a.length() + 4;
	int dollars, quarters, dimes, nickels;
	const float dol = 1, q = .25, d = .1, n = .05;
	char selection;
	string item;
	float cost, money_available;
	bool valid_flag = true;

int main()
{   

	cout << "Items available: " << endl << left << setprecision(2) << fixed    
	     << setw(width) << "A. " + item_a << "| $" << item_a_cost << endl    
	     << setw(width) << "B. " + item_b << "| $" << item_b_cost << endl    
	     << setw(width) << "C. " + item_c << "| $" << item_c_cost << endl    
	     << setw(width) << "D. " + item_d << "| $" << item_d_cost << endl;
	cout << "Please insert money ($1, .25, .10, .05): ";
	cin >> dollars >> quarters >> dimes >> nickels;
	cout << "Make an item selection: ";
	cin >> selection;
	switch(selection)
	{
		case 'A':
		case 'a':   
			item = item_a;
		//	item_a;
			cost = item_a_cost;
			break;
		case 'B':
		case 'b':
			item = item_b;                       
	      	 	cost = item_b_cost;
		break;
		case 'C':
		case 'c':item = item_c;                       
			 cost = item_c_cost;
			break;
		case 'D':
		case 'd':item = item_d;                       
			 cost = item_d_cost;
			 break;
		default:
			 cout << "Invalid selection. Money returned.\n";
			 valid_flag = false;
			 break;
	}
	money_available = dol*dollars + q*quarters + d*dimes + n*nickels;
	if(valid_flag)
	if(money_available > cost)
	{
		cout << item     << " dispensed, please gather your change of $"<< money_available - cost << '.' << endl;
	}
		else if(money_available == cost)
		{
		cout << item << " dispensed, there is no change." << endl;
		}
		else 
		{
		cout << "Insufficient funds. Money returned." << endl;
		cout << "Have a nice day!" << endl;
		}
		return 0;
}


	
