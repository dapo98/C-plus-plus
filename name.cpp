//Dapo Otepola-Bello
//9-4-2020
#include <iostream>
using namespace std;

int main ()
{
	string nam1, nam2, nam3,nam4;
	cout<< "Enter your full name: ";
	cin>> nam1>>nam2>>nam3;	
	nam4= nam1+nam2+nam3;
	cout<<"This name has " <<nam4.length()<< " letters."<<endl;


	cout<<nam1.substr(0,1) <<nam2.substr(0,1) <<nam3.substr(0,1)<<endl;

	

	cout<<nam1.substr(nam1.length()/2, nam1.length()/2+1) <<nam2.substr(nam2.length()/2, nam2.length()/2+1) <<nam3.substr(nam3.length()/2,nam3.length()/2+1)<<endl;

	

	
	


return 0;
}
