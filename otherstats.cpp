//Dapo Otepola-Bello
//11-16-2020
#include<iostream>
#include <cmath>
using namespace std;


double median(double arr[], int size);
double mode(double arr[], int size);

double median(double arr[], int size)
{
	double sum = 0;
	if (size % 2 == 0)
//		return (double)arr[size/2];
//	return (double)(arr[(size-1)/2] + arr[size/2])/2.0;
	{
	sum = (arr[(size-1)/2] + arr[size/2])/2.0;
	}
	else 
	{
		sum = arr[size/2];
	}
	return sum;
//	cout << sum << endl;
}

double mode(double arr[], int size)
{

	double mode = arr[0], num = 1, count = 1;

	for (int i = 0; i < size-1; i++)
	{
		if (arr[i] == arr[i+1])
		{
			++count;
		}
		else
			count = 1;
		if (count > num)
		{
			num = count;
			mode = arr[i];
		}
	}
	return mode;
	
}


int main()
{

	//double arr[i];
	int i;
	double size,j,x;
	
	//double arr[i];
	//size=sizeof(arr[0])/sizeof(arr[0]);
//	int arr[],mode;

//	int*arr=NULL;
	double*arr=NULL;

//	arr=new int[i];
	arr=new double[i];
	cout<<"Enter array size: ";
	cin>>size;

	cout<<"Enter numbers: ";	

	for(i=0; i<size; i++)
	{
	cin>>arr[i];
	}

//sort array
for(int i=0; i<size-1; i++)
    {
     for(int j=i+1; j<size; j++)
     {
        // j++;
     if(arr[j] < arr[i])
            {
  
             x=arr[i];
            arr[i] =arr[j];
	    arr[j]=x;
          
            }
     }
    }
  


	cout<<"The median is "<<median(arr,size)<<endl;


	cout<<"The mode is "<<mode(arr, size)<<endl;






	return 0;
}
