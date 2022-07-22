//Dapo Otepola-Bello
//10-23-2020
#include <iostream>
using namespace std;


int main()
{


	int num0 = 0;
	int num1 = 0;
       	int sum = 0;

	cout<<"Enter a number: ";
	cin>>num0;
	
	num1 = num0;

	for (int i = 0; i <= sum; i++)
	{
		sum = sum + num0 % 10;
		num0 = num0 / 10;
	}
	cout<<"Digit sum of "<< num1 <<" is "<< sum << "." << endl;

       return 0;
}
