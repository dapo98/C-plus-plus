//Dapo Otepola-Bello
//9-13-2020
#include <iostream>
using namespace std;

int main() 
{
	
	double dol; 

	//int dol2;
	int quart;
	int dim;
	int nick;
	int pen; 

	
	const int co1=25;
	const int co2=10; 
	const int co3=5;
	const int co4=1;
	
	



	

	int rem1;
	int rem2;
	int rem3;

	

	cout<< "Enter a dollar amount: ";
	cin>>dol;
	const int dol2=dol*100;
	quart= dol2 /co1; 
	 rem1=dol2 % co1; 
	 
	dim= rem1 / co2;
	rem2= rem1%co2;
	nick=rem2/co3;
	rem3=rem2%co3;
	pen=rem3/co4;
	
		

	

	cout<<"Quarters: "<<quart <<endl;
	cout<<"Dimes: "<<dim <<endl;
	cout<<"Nickels: "<<nick <<endl;
	cout<<"Pennies: "<<pen <<endl;


	
	
	return 0;
}

