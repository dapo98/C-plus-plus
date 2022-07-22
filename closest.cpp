//Dapo Otepola-Bello
//11-7-2020
#include <iostream>
using namespace std;

int main()
{

	
	const int size = 3;	
	int arr[size], i = 0;
//	int arr1[10]={0,1,2,3,4,5,6,78,9];
	char ch; 
	int x=sizeof(arr)/sizeof(arr[0]);
	int index = 2;
	//int arr[k]; 

	string temp; 
	cout <<"Enter 10 numbers: ";
	do 
	{
		cin >> arr[i];
		i++;
		ch = cin.get();
	} 
	while(ch != '\n' && i < size);
	if(i == size && ch != '\n')
		getline(cin, temp);
	for(int k = 0; k < size; k++)
		cout << arr[k] << endl; 

	while (i < x)
	{
		if (arr[i] == i)
		{
		cout<<"Closest numbers are "<<arr[i]<< " at index " <<i<<" and "<<x<<" at index "<<i<<endl;
		}
		i++;
	}
	//if (i < x)
	//{
//	cout << "The closest numbers are " << arr[i] << " at index " << i << " and " << index << " at index " << i << endl;
//	}
	


	//cout<<"The closest numbers are "<< x <<" at index "<< i <<" and " <<x<<" at index "<<i<<endl;
	



	return 0;
}
