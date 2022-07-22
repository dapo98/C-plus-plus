#include <iostream>
using namespace std;

int main ()
{
 	int x;
        cout << "Enter a number: ";
	cin >> x;
	int y;
	cout << "Enter another number: ";
	cin >> y;	
        char z= x/y;
        char a= (1.0*x)/y;	
        cout << z  << "," << a << endl;	
	

	return 0;
}	
