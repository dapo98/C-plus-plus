//Dapo Otepola-Bello
//11-3-2020
#include <iostream>
using namespace std;


int main()
{

	int*arr1=NULL;
	int num0=0;
	int num1=0;
	int num2=0;
        int num3=0; 
	int num4=0;
        int num5=0; 
	int num6=0;
//	const int arr1_size=num0;
	int sum=0;
	int i;
	char ch;
	string temp;

//arr1=new int[num0];

//for(int i=0; i<num0; i++)
//{
//	arr1[i]=0;
//}

	cout<<"Enter array size: ";
	cin>>num0;

	arr1=new int [num0];

	for(int i=0; i<num0; i++)
{
	arr1[i]=0;
}
	
	cout<<"Enter "<<num0<<" numbers: ";

	do{
	cin>>arr1[i];
	i++;
	ch=cin.get();
	}
	while (ch!='\n' && i<num0);

	if(i==num0&& ch!='\n')
		getline(cin,temp);


	for(int i=0; i<num0; i++)
	{
		sum+=arr1[i];

	}

	cout<<"The sum is "<<sum<<"."<<endl;

       
	return 0;
}
