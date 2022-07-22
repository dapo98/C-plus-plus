//Dapo Otepola-Bello
//12-8-2020
#include <iostream>
using namespace std;
int length, k = 0, shift = 0;int * arr0 = NULL;int * arr1 = NULL;char ch;string temp;

int main()
{
	cout << "Enter the array length: ";
	cin >> length;
	cin.ignore();
	arr0 = new int[length];
	arr1 = new int[length];
	cout << "First array: ";
	do           
       	{
	cin >> arr0[k];      
	k++;            
    	ch = cin.get();       
       	} while(ch != '\n' && k < length);      
      	if(ch != '\n' && k == length)           
	 getline(cin, temp);
	k = 0;cout << "Second array: ";
	do 
       	{              
	   cin >> arr1[k]; 
	   k++;              
	   ch = cin.get();      
      	} while(ch != '\n' && k < length);      
      	if(ch != '\n' && k == length)        
	getline(cin, temp);
	k = 0;
	while(k < length && shift < length)
	{   
	while(arr0[k] == arr1[(k+shift) % length] && k < length)
	k++;  
	if(k < length)
	{     
	k = 0;
	shift++;
	}
	}
	
	if(shift < length)
	{

	cout << "Shift by " << shift << endl;
	}

	else 
	{
		cout << "Not a shift!" << endl;
	}

	return 0;
	}
