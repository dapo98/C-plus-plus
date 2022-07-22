//Dapo Otepola-Bello
//12-12-2020
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

string userFile, line, temp;
int row = 0;
int col = 0;
int num;
//int arr[row * col];

int main()
{
	cout << "Enter file name: ";
	getline(cin, userFile);
	cout << "Now reading " << userFile << "..." << endl;
	
	ifstream inputFile;
	inputFile.open(userFile);

	/*while(getline(inputFile, line))
	{
		row++
		
	}*/

	while(getline(inputFile, line))
	{
		row++;
		if (row == 1)
		{
			stringstream ss(line);
			while(ss >> temp)
				col++;
		}
	}


	/*for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		arr[i][j];
	}*/


	cout << "Matrix size: " << row << "x" << col << endl;

	
}
