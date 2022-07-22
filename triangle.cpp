//Dapo Otepola-Bello
//9-19-2020
#include <iostream>
using namespace std;

int main() 
{
	float sid0;
	float sid1;
	float sid2;
	const float sum=sid2+sid1;
	const float sum1=sid0+sid2;
	const float sum2=sid1+sid0;

		

	cout<<"Enter three side lengths: ";
	cin>>sid0>>sid1>>sid2;
	



	if (sid0<sum) 
		cout<<"A triangle is possible."<<endl;

	else if (sid1<sum1)  
		
		cout<<"A triangle is possible"<<endl; 

	else if (sid2<sum2) 
		cout<<"A triangle is possible"<<endl;

	

	else 
		cout<<"A triangle is not possible."<<endl;



	return 0;
	}
