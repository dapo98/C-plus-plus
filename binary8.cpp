//Dapo Otepola-Bello
//9-9-2020
#include <iostream>
using namespace std;

int main()
{
	
       int decimal;

	cout<<"Enter a number in base 10: ";
	cin>> decimal;

	int rem=decimal%2;

	decimal /= 2;

	int var1=rem;
	
	rem=decimal%2;
	decimal/=2;

	int var2=rem;

	rem=decimal%2;
	decimal/=2;
	
	int var3=rem;



	rem=decimal%2;
	decimal/=2;

	int var4=rem;

	rem=decimal%2;	
	decimal/=2;

	int var5=rem;

	rem=decimal%2;
	decimal/=2;

	int var6=rem;

	rem=decimal%2;
	decimal/=2;

	int var7=rem;

	rem=decimal%2;
	decimal/=2;

	int var8=rem;

	cout<<"Least 8 significant binary bits: "<<var8<< var7<<var6<<var5<<var4<<var3<<var2<<var1<<endl;
	

return 0;
}
