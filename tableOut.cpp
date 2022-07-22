//Dapo Otepola-Bello
//12-8-2020
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int user, row, col;
	cout << "Enter a number: ";
	cin >> user;
	cout << "Now generating a " << user << "x" << user << " table..." << endl;

	ofstream outputFile;
	outputFile.open("table.txt");

	/*for (int i = 0; i < user; i++)
	{
		outputFile << i << ' ';
	}*/
	for (row = 1; row <= user; row++)
	{
	//cout << setw(2) << endl;
		for (col = 1; col <= user; col++)
		{
			outputFile << row * col << " ";
		}
		cout << endl;
	}
//	cout << endl;
		
	cout << "Done" << endl;
//	inputFile.close();

	return 0;
}
