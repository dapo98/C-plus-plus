//Dapo Otepola-Bello
//November 15, 2020
#include <iostream>
using namespace std;

//void patternSearch(char *word, char *str);
//int patternSearch(string *str, string *word);

//void patternSearch(char *word, char *str)
int patternSearch(string &str, string &word)
{
	int x = str.length();
	int y = word.length();
	int count;
	int newCount;

	for (int i = 0; i <= y - x; i++)
	{
		int j;
		for (j = 0; j < x; j++)
			if(word[i+j] != str[j])
				break;
		if (j == x)
		{
			count++;
			j = 0;
		}
	}
	newCount = count - 1;

	/*int i, j = 0;
	while ((str[j] != 0) || (word[i] != 0))
	{
		if(word[i] != str[j])
		{
			j++;
			i = 0;
		}
		else
		{
			i++;
			j++;
		}
	}
	if (word[i] == 0)
		return 1;
	else
		return -1;*/
	//int x = sizeof(word);
	//int y = sizeof(str);
	//
	/*
	int i = 0;

	while (i <= str.length() - word.length())
	{
	int j;
	for (j = 0; j < word.length(); j++)
		if (str[i + j] != word[j])
			break;
	if (j == word.length())
	{
		cout << "Pattern: " << i << endl;
		i = i + word.length();
	}
	else if (j == 0)
		i = i + 1;
	else
		i = i + j;
*/



	/*	for (int j = 0; j < x; j++)
			if (str[i + j] != word[j])
				break;
		if (int j = sizeof(word))
			cout << "Pattern: " << i << endl;*/

	/*
	int x = word.size();
	int y = str.size();
	int i = 0;

	while (i <= y - x)
	{
		int j;
		for (j = 0; j < x; j++)
			if(str[i+j] != word[j])
				break;
		if (j == x)
		{
			cout << "Here: " << i << endl;
			i = i + x;
		}
		else if (j == 0)
			i = i + 1;
		else
			i = i + j;
	}*/
//	return count;
	return newCount;
}

int main()
{
	//char string[];
	//char word[];
	int i, j;
	//char str[i];
	//char w[i];
	//char *str, *w;
	string word;
	string str;
	//int i, j, count = 0;
	//str = string;
	//w = word;
	cout << "Enter first string: ";
	getline(cin, str);
	cout << "Enter search term: ";
	cin >> word;
	
	
	//cout << patternSearch(str, word) << endl;
	cout << "Number of instances: " << patternSearch(word, str) << endl;
	//cout<<"The first string has " << i << " instances of " << word << "." << endl;
	//cout << "The first string: " << j << "instances." << endl;
	return 0;
}

