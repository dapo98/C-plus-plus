//Dapo Otepola-Bello
//11-22-2020
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
/*

	double distance(int num1,int num2,int num3,int num4)
{
	return sqrt(pow(num2-num1,2)+

	 pow(num4-num3,2)*1.0);
}
*/
int main()
{

	int i,j,num1,num2,num3,num4;
	int row=2, column=2;
	double distance=0,x; 
	int arr[row][column];
//	int arr1[2][2]={{num3=0,num4=0}};

	for(int i=0; i<row; i++)
	{
	cout<<"Enter Coordinate "<<i+1<<": ";
	{
	
	for(int j=0; j<column; j++)
	{
//	cout<<"Enter Coordinate 1: "<<" ";
	cin>>arr[i][j];
	} 
	}
	}
	
//	cout<<endl;
/*	
	
	for(int i=0; i<2; i++) 
	{
	
		for(int j=0; j<2; j++)
		
	 cout<<"Enter coordinate 2: "<<" ";
	cin>>arr[i][j];
	}
*/		
	
//	cout<<endl;
/*


//	cout<<arr[0][1];
	cout<<"Enter coordinate 1: ";
	cin>>arr[i][j];
//	cin>>num1>>num2;


//	cout<<"Enter coordinate 2: ";
	cin>>arr1[i][j];
//	cin>>num3>>num4;

	
*/


      // distance=sqrt(pow(j-i,2)+pow(j-i,2));
      distance=sqrt(pow(arr[1][0]-arr[0][0],2)+pow(arr[1][1]-arr[0][1],2)*1.0);
	cout<<endl<<fixed<<setprecision(2)<<"Distance is "<<distance<<endl;

	return 0;
}
