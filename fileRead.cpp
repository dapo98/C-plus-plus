//Dapo Otepola-Bello
//12-8-2020
#include <iostream>
#include <fstream>
using namespace std;

string userFile, x;
int wordCount = 0;

int main()
{
	//ifstream inputFile;
	//inputFile.open("Lab15_1.txt");

	//string userFile;
	cout << "Enter file name: ";
	//cin >> userFile;
	getline(cin, userFile);
	
	ifstream inputFile;
	inputFile.open(userFile);	

	cout << "Now reading " << userFile << "..." << endl;
	
	//ifstream inputFile;
	//inputFile.open("Lab15_1.txt");

	//int num = 0;
	//int wordCount = 0;
	//while (inputFile >> num)
	//for(int i = 0; i < userFile.size(); i++)
	/*while(!inputFile.eof())
	{
		inputFile 
		if(userFile[i] == ' ')
		wordCount++;
	}*/
	
	if (inputFile)
	{
		cout << "Done" << endl;
		while (inputFile >> x)
		{
			wordCount++;
		}
		cout << userFile << " word count: " << wordCount << endl;
	}

	return 0;
}
