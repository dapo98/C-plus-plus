//Dapo Otepola-Bello
//9-19-2020
#include <iostream>
using namespace std;

int main() 
{
	float a,b,c;

	cout<<"Enter three side lengths: ";
	cin>>a>>b>>c;

	if(a+b>c && a+c>b && b+c>a) 
		cout<<"A triangle is possible."<<endl; 
	else
		cout<<"A triangle is not possible."<<endl;


	return 0;
	}
