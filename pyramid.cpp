//Dapo Otepola-Bello
//10-27-2020
#include <iostream>
using namespace std;


int main ()

{

	char y = '*';
	int z = 10-2;
	int row;
	cout<<"Enter number of rows: ";
	cin>>row;


{
    
    for (int i = 0; i < row; i++) 
    
    {
     for (int x = 0; x < z; x++)
            cout<< " ";
 	
     
     z = z - 1;
     
        for (int x = 0; x <= i; x++) 
	{
           
            cout<<" "<<y;
        }

 
       
        cout << endl;
    }
}
 
return 0;
}
