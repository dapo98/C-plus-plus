//Dapo Otepola-Bello
//11-2-2020
#include<iostream>
using namespace std;


int main()
{

	char str[50];
	int x=0;

	cout<<"Enter sentence: ";
	cin.getline(str, 50);

	
	
	
	for (int i=0;str[i] !='\0';i++)

	{
		if(str[i]==' ')
		{
			x++;
		}
	}
		cout<<"word count: "<<x+1<<endl;
	






	return 0;
}
