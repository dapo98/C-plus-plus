//Dapo Otepola-Bello
//9/20/2020
#include <iostream>
using namespace std;

int main() 
{
	int i0, i1, i2, i3, i4, i5;
	int d0, d1;
	int countd0, countd1, countboth;

	cout<<"Enter in six integers: ";
	cin>> i0>>i1>>i2>>i3>>i4>>i5;
	cout<<"Enter in two divisors: ";
	cin>> d0>> d1;

	countd0= (i0 % d0 == 0) + (i1 % d0 == 0) + (i2 % d0 == 0)+ (i3 % d0 == 0) + (i4 % d0 == 0) + (i5 % d0 == 0);

	countd1=(i0 % d1 == 0) + (i1 % d1 == 0) + (i2 % d1 == 0)                + (i3 % d1 == 0) + (i4 % d1 == 0) + (i5 % d1 == 0);

	countboth=(i0 % d0 == 0 && i0 % d1 == 0)  + (i1 % d0 == 0 && i1 % d1 == 0)  + (i2 % d0 == 0 && i2 % d1 == 0)  + (i3 % d0 == 0 && i3 % d1 == 0)  + (i4 % d0 == 0 && i4 % d1 == 0)  + (i5 % d0 == 0 && i5 % d1 == 0);


	if(countd0 != 1) 
	       cout << " numbers are divisible by " << d0     << '.' << endl;

	else cout << countd0 << " number is divisible by " << d0     << '.' << endl;
	if(countd1 != 1)             
	     	cout << countd1 << " numbers are divisible by " << d1                     << '.' << endl;

	else               
	       	cout << countd1 << " number is divisible by " << d1                     << '.' << endl;

	if(countboth != 1)                
		cout << countboth << " numbers are divisible by both." << endl;        else               
		cout << countboth << " number is divisible by both." << endl;


return 0;
}
