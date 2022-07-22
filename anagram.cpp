//Dapo Otepola-Bello
//12-16-2020
#include <iostream>
using namespace std;

bool isAnagram(string str0, string str1);

int main(){string str_x, str_y;
	cout << "First string: ";
	getline(cin, str_x);

	cout << "Second string: ";	
	getline(cin, str_y);
	
	cout << "The two string are ";

	if(isAnagram(str_x, str_y))

		cout << "anagrams." << endl;
	else
		cout << "NOT anagrams." << endl;
	return 0;
}
bool isAnagram(string str0, string str1)
{
	int i = 0, k = 0;

	bool anagram = true;   
	
	while(i < str0.length() && anagram)
	{
	k = 0;
	while(k < str1.length() && str0[i] != str1[k] && str0[i] != ' ')
	k++;
	if(k == str1.length())  
	anagram = false;
	else if(str0[i] == str1[k])  str1[k] = ' ';  
      	i++;
	}
	i = 0;
	while(i < str1.length() && anagram)
	{   
	if(str1[i] == ' ')
	i++;
	else 
		anagram = false;
	}
	return anagram;
}
