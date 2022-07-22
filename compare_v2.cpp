#include <iostream>
using namespace std;
int main() 
{

	char as0;
	char as1;
	char a;

	cout<<"Enter two unique characters: ";
	cin>>as0>>as1;

//	(as0>as1)? as0: as1;
	 a=as0 > as1 ? as0:as1;
	cout << a << " has a greater index" << endl;
	 



	return 0;
}
