//Dapo Otepola-Bello
//12-8-2020
#include<iostream>
using namespace std;


const int size=10;
int arr[size], k=0, min_difference,difference_test;
int index0=0, index1=1;
char ch;
string temp;

int main()
{
	cout<< "Enter "<<size<<" numbers: ";
	do
	{
		cin>> arr[k];
		k++;
		ch=cin.get();
	} while( ch!='\n' && k<size);
	if(ch !='\n' && k==size)

	getline(cin,temp);
	min_difference = arr[0] - arr[1];  
	if(min_difference < 0)
		min_difference *= -1;
	for(int i = 0; i < size - 1; i++)
	{
	for(int j = i+1; j < size; j++)
	{
	difference_test = arr[i] - arr[j];
	if(difference_test < 0) 
	difference_test *= -1;
	if(difference_test < min_difference)
	{
	min_difference = difference_test;
	index0 = i;
       	index1 = j;
	}
	}
	}
	cout << "The closest numbers are " << arr[index0] << " at position "     << index0 << " and " << arr[index1] << " at position " << index1     << endl;
	return 0;
}
