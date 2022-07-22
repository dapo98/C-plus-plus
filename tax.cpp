//Dapo Otepola-Bello
//9-23-2020
#include <iostream>
using namespace std;
int main()
{

	int filing;
	string tax;
	int x=1;
	int y=2;
	string single;
	string joint;
	int income1;
	int income;

	cout<<"Are you filing as a single or jointly?\n";
	cout<<"1. Single"<<endl;
	cout<<"2. Joint"<<endl;
	
	filing=(x||y)? x:y;

	cout<<"Select option: ";
	cin>>filing;	

	
	if (x) 
	{
		cout<<"Enter income ($): ";
		cin>>income;
		
		{
		if(income>=530800)
		cout<<"marginal tax rate: 37%"<<endl;	
	
		else if (income>=219750)
		cout<<"marginal tax rate: 35%"<<endl;	

		else if (income>=175700)
		cout<<"marginal tax rate: 32%"<<endl;

		else if (income>=97925)
		cout<<"marginal tax rate: 24%"<<endl;

		else if (income>=52525)
		cout<<"marginal tax rate: 22%"<<endl;

		else if (income>=22275)
		cout<<"marginal tax rate: 12%"<<endl;

		else if (income>=12400)
		cout<<"marginal tax rate: 10%"<<endl;

		else //(income<12400)
		cout<<"marginal tax rate: 0%"<<endl;
		}
		
	}

	else if(y)
	{
		cout<<"Enter joint income ($): ";
		cin>>income;
		{
	
		if (income>=646850)
		cout<<"marginal tax rate: 37%"<<endl;
	
		if (income>=439500)
		cout<<"marginal tax rate: 35%"<<endl;

		if (income>=351400)
		cout<<"marginal tax rate: 32%"<<endl;

		else if (income>=195850)
		cout<<"marginal tax rate: 24%"<<endl;

		else if (income>=105050)
		cout<<"marginal tax rate: 22%"<<endl;
	
		else if (income>=44550)
		cout<<"marginal tax rate: 12%"<<endl;

		else if (income>=24800)
		cout<<"marginal tax rate: 10%"<<endl;

		else if (income>=0)
		cout<<"marginal tax rate: 0%"<<endl;
		}
	}		

	return 0;
}
