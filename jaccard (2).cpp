//Dapo Otepola-Bello
//12-16-2020
#include <iostream>
#include <iomanip>
using namespace std;


char ch;
string temp;
int k = 0;
int dec_acc = 2;  
string * tags0 = NULL;
string * tags1 = NULL;


int main()
{
	
		
	int size0, size1;
	cout << "Number of tags in Item 1: ";
	cin >> size0;
	cin.ignore();
	tags0 = new string[size0];
	cout << "Enter tags: ";
	do
	{
		cin >>tags0[k];
		k++;
		ch = cin.get();
	} while(ch != '\n' && k < size0);
	if(ch != '\n' && k == size0)
	getline(cin, temp);
	cout << "Number of tags in Item 2: ";
	cin >> size1;
	cin.ignore();

	tags1 = new string[size1];
	cout << "Enter tags: ";
	k = 0;
	do
	{
	cin >> tags1[k];
	k++;
	ch = cin.get();
	} while(ch != '\n' && k < size1);
	if(ch != '\n' && k < size1)
	getline(cin, temp);
	 
	int intersection = 0;


	 
	 for(int i = 0; i < size0; i++)
	 {
	for(int j = 0; j < size1; j++)
	{
	if(tags0[i] == tags1[j])
	intersection++;
	}
	 }
	 int union_count = size0 + size1 - intersection;
	double jaccard = 1.0*intersection/union_count;
	
	cout << fixed << setprecision(dec_acc);
	 
	 cout << "Jaccard Index is " << jaccard << endl;
	
	 return 0;
}


