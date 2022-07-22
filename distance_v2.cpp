//Dapo Otepola-Bello
//12-7-2020
#include <iostream>
#include <cmath>
using namespace std;


const int MAX_SIZE = 4; 
int x1,x2,x3,y2,y3; 
double x,y,z,t,s; 



double distance(double x, double y, double z, double t, double * s)
{
	int sum1=((x - y)*(y - x) + (y - y)*(y - y));
	int sum2=((x - x)*(x - x) + (y - y)*(y - y));
	int sum3=((x - x)*(x - x) + (y - y)*(y - y));

	  sqrt(sum1);
	  sqrt(sum2);
	  sqrt(sum3); 

	 return x;

	//return sqrt(pow(t - x, 2) + pow(y - z, 2);
}
  
int main()  
{ 

//	int x,y,z,t,s; 
	double distance_arr[MAX_SIZE]; 
	int k=0; 
	char ch; 
	string temp; 
	cout<<"Enter coordinate values in order (x,y,z,t): "; 
	do 
	{ 
      
	cin >> distance_arr[k]; 
	 ch= cin.get(); 
	k++; 
	} while(k < MAX_SIZE && ch != '\n'); 
	if(k== MAX_SIZE && ch != '\n') 
	getline(cin,temp); 
	  	
	switch(k) 
	{  
		case 1: 
			
	cout<< "From orgin, d = " <<distance(x,y,z,t,&s) << endl;
			break; 
		case 2: 
			
	cout << "From origin, d = " << distance(x,y,z,t,&s) << ", s = " << distance(x,y,z,t,&s)<< endl; 			
		       break;  
	} 		
			
	       							       return 0; 
} 
