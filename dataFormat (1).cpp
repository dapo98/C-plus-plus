//Dapo Otepola-Bello

//12-12-2020
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

int row, i;
int n, sum, total = 0;
string userFile, line;
double mean, range, median = 0;

int main()
{
	cout << "Enter file name: ";
	getline(cin, userFile);
	//cout << "Now reading " << userFile << "..." << endl;

	ifstream inputFile;
	inputFile.open(userFile);

	if (inputFile)
	{
		cout << "Now reading " << userFile << "..." << endl;
	}
	else
	{
		cout << "Error opening file" << endl;
		inputFile.close();
	}

	ofstream outputFile;
	outputFile.open("dataOut.txt");

	cout << "Writing results to dataOut.txt..." << endl;
	
	outputFile << "	| Mean  | Median | Range |" << endl;
	outputFile << "--------+-------+--------+-------+" << endl;

/*	while(getline(inputFile, line))
	{
		for(int i = 1; i <= row; i++)
		{
			row++;
		}
	row++;
	cout << row << endl;
	}*/
		while(getline(inputFile, line))
		{
//	cout << row << endl;
//	for(int i = 1; i <= row; i++)
//	{	
		//int arr[i];
		stringstream ss(line);

		int value = 0;
		int total = 0;
		int count = 0;
		while (ss >> value)
		{
			total += value;
			count++;
		} 
		mean = (double)total/count;
	
		
//		double middle = line/2.0;
		int size;
		if(line.size() % 2 == 0)
		{
			//median = line[line.size()/2 - 1];
			//median = (line[line.size()/2] + line[(line.size()/2) + 1]) /2; 
			median = (line[line.size()/2 - 1] + line[line.size()/2])/2;
			//median = (line[i/2] + line[i/2]-1)/2;
			//median = line[middle];
			//median = line[total/2 - 1];
		}
		else
		{
			median = line[line.size()/2];
			//median = line[i/2];
		}
		
		int n = sizeof(line[i])/ sizeof(line[0]);
		//range = line[line.size()-1] - line[0];
		//range = line[line.size()] - line[0];
		//range = line[0] - line[line.size()];
		//range = line[0] - line[line.size()-1];
		range = line[0] - n; 
	int k;
	for (k = 1; k <= row; k++)
	{
		k++;
	}
	outputFile << "Row "<< k++ << "    |" << fixed << setprecision(2) << mean 
<< "	| " << median << "	 |" << range << "  |" << endl;
		

		}
	cout << "Done" << endl;
	
	return 0;
}
