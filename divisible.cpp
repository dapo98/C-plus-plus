#include <iostream>
using namespace std;


int main()
{

	int num;
	int count = 0;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<num<< " is divisible by: " << endl;

	for(int i=2; i<num; i++)
	{
		if(num%i==0) 
		{
			cout << i << " ";
			count++;
			if (count % 8 == 0)
			{
				cout << endl;
			}
		}
		//cout<<num<<" is a divisible by: "<<i<<endl;
	}	

	cout << endl;

	return 0;
}
