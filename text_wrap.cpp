//Dapo Otepola-Bello
//10-24-2020
#include<iostream>
using namespace std;


int main()
{

	
	string word;
	char x;
	char i;
	int count;

	cout<<"Enter a word and a character: ";
	cin>>word>>x;
	

	for (int i = 0; i < word.length() + 3; i++)
	{
		cout << x;
	}
	cout << x;
	cout << endl;

	cout << x << " " << word << " " << x << endl;
	
	for (int i = 0; i < word.length() + 3; i++)
	{
		cout << x;
	}
	cout << x;
	cout << endl;
	


	return 0;
}
