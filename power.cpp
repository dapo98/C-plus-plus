#include<iostream>
using namespace std;


int main()
{
	float num0;
	int num1;
	float num2=1;
	int x;


	cout<<"Enter the base and the exponent: ";
	cin>>num0>>num1;

	for (int i=1; i<=num1;i++)

//	for(int i=1;i<=num1;i*=num1)	
	{
		num2=num2*num0; 
	}
	
		cout<<num0<<" to the power of "<<num1<<" is "<<num2<<endl;

	





	return 0;
}
