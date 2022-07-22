//Dapo Otepola-Bello
//10-5-2020
#include <iostream>
using namespace std;

int main ()
{


	char a;
	char c;
	char e;	
	char b;
	char d;
	char f;
//	char choice;
	char var;
	

	cout<<"Today's menu:"<<endl;
	cout<<"a. Pizza		b. Beef Noodle soup"<<endl;
	cout<<"c. Lasanga		d. Grilled Cheese"<<endl;
	cout<<"e. Quesadilla		f. Steak and Fries"<<endl;

	cout<<"Make your selection: ";
	cin>>var;
	
	cout<<var<<endl;

	switch(var)
	{

		case 'a':
			cout<<"Pizza cost $5.\n";
			break; 
		
		case 'c':
			cout<<"Lasagna cost $5.\n";
			break;
		
		case 'e':
			cout<<"Quesadilla cost $5.\n";
			break;
		
		case 'b':
			cout<<"Beef Noodle Soup cost $5.\n";
			break;

		case 'd':
			cout<<"Grilled Cheese cost $5.\n";
			break;

		case'f':
			cout<<" Steak and Fried cost $5.\n";
		break;	
		

	}
		




	return 0;


}
