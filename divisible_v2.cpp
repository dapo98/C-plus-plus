#include <iostream>
using namespace std;

int main()
{

	int num;
	//int i=2;
	int count=1;

	cout<<"Enter a number: ";
	cin>>num;

	cout << num << " is divisible by: " << endl;

	for (int i = num; i > 1; i--)
	{
		if (num % i == 0 && i != num)
		{
			cout << i << " ";
			count++;
			if (count % 8 == 0)
			{
				cout << endl;
			}
		}
	}


	//for (int row = 0; row <= 8; row++)
	//for (int i = 2; i <= num; i--)
	//for(int i=num; i>1; i--)
//	for(counter=num;counter>1; counter--)	
	//{
	//	if(num%i==0&&counter)
	//	if(num%count==0&&count!=num)
/*	if(num%i==0)
	{
		if(count%8==0)

		{
		cout<<endl;
	
		}	
	}		
			cout<<num<<" is a divisible by: "<<i<<endl;
	}*/
//	cout << num << "is divisible by: " << i << endl;
//		cout<<endl;
	
	cout<<endl;
	
	return 0;
}
