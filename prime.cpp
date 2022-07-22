//Dapo Otepola-Bello
//10-23-2020
#include<iostream>
using namespace std;


int main()
{


	int num;
	int x=0;
	int y=1;
	cout<<"Enter a number: ";
	cin>>num;

	for(int i=2; i<num; i++)

	{
	if(num%i==x)
	{
	cout<<num<<" is not a prime number"<<endl;
	
	}
		
		else if(num%i!=x)
	{
		cout<<num<<" is a prime number"<<endl;
	}
		break;
	  
	}


	if (num<=y)
	{
		cout<<"Error-input must be greater than 1"<<endl;
	}


	return 0;

}
